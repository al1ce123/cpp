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

bool RPN(std::string expr) {
    std::stack<int> s;
    std::size_t i;
    int nbr;
    long long nbr1, nbr2;
    long long result;

    for (i = 0; i < expr.size(); ++i) {
        if (i > 0 && std::isdigit(expr[i]) && std::isdigit(expr[i - 1])) {
            std::cerr << "Error" << '\n';
            return false;
        }
        if (!isValidToken(expr[i])) {
            std::cerr << "Error" << '\n';
            return false;
        } else if (isOperatorToken(expr[i]) && s.size() < 2) {
            std::cerr << "Error" << '\n';
            return false;
        }
        if (std::isdigit(expr[i])) {
            nbr = static_cast<long long>(expr[i] - '0');
            s.push(nbr);
        } else if (isOperatorToken(expr[i])) {
            nbr2 = s.top();
            s.pop();
            nbr1 = s.top();
            s.pop();
            if (expr[i] == '+') {
                if (((nbr1 + nbr2) > MAX_INT)) {
                    std::cerr << "Overflow" << '\n';
                    return false;
                }
                s.push(nbr1 + nbr2);
            } else if (expr[i] == '-') {
                if (((nbr1 - nbr2) < MIN_INT)) {
                    std::cerr << "Overflow" << '\n';
                    return false;
                }
                s.push(nbr1 - nbr2);
            } else if (expr[i] == '*') {
                if (((nbr1 * nbr2) > MAX_INT) || (nbr1 * nbr2) < MIN_INT) {
                    std::cerr << "Overflow" << '\n';
                    return false;
                }
                s.push(nbr1 * nbr2);
            } else if (expr[i] == '/') {
                if (nbr2 == 0) {
                    std::cerr << "Infinity" << '\n';
                    return false;
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
    if (!s.empty()) {
        std::cerr << "Error" << '\n';
        return false;
    }
    if (result > MAX_INT || result < MIN_INT) {
        std::cerr << "Overflow" << '\n';
        return false;
    }
    std::cout << result << '\n';
    return true;
}

