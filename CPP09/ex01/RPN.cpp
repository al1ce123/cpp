#include "RPN.hpp"

bool isValidToken(char c) {
    if (c != ' ' && c != '+' && c != '-' && c != '*' && c != '/' && !(c <='9' && c >= '0')) {
        return false;
    }
    return true;
}

bool isOperatorToken(char c) {
    if (c != '+' && c != '-' && c != '*' && c != '/') {
        return false;
    }
    return true;
}

long RPN(std::string expr) {
    std::stack<int> s;
    std::size_t i;
    int nbr;
    long nbr1, nbr2;
    long result;

    for (i = 0; i < expr.size(); ++i) {
        if (!isValidToken(expr[i])) {
            std::cerr << "Error" << '\n';
            return -1;
        } else if (isOperatorToken(expr[i]) && s.size() < 2) {
            std::cerr << "Error" << '\n';
            return -1;
        }
        if (std::isdigit(expr[i])) {
            nbr = static_cast<int>(expr[i] - '0');
            s.push(nbr);
        } else if (isOperatorToken(expr[i])) {
            nbr2 = s.top();
            s.pop();
            nbr1 = s.top();
            s.pop();
            if (expr[i] == '+') {
                s.push(nbr1 + nbr2);
            } else if (expr[i] == '-') {
                s.push(nbr1 - nbr2);
            } else if (expr[i] == '*') {
                s.push(nbr1 * nbr2);
            } else if (expr[i] == '/') {
                if (nbr2 == 0) {
                    std::cerr << "Error: division by 0" << '\n';
                    return -1;
                }
                else {
                    s.push(nbr1 / nbr2);
                }
            }
        }
        if (i == (expr.size() - 1)) {
            result = s.top();
            s.pop();
        }
    }
    return result;
}

