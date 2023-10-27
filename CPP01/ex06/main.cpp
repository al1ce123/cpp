#include "Harl.hpp"

int getMessageNumber(std::string msg) {

    std::string msgs[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; ++i) {
        if (msg == msgs[i])
            return i;
    }

    return -1;
}

int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cout << "Usage: ./harlFilter <message> " << std::endl;
        return 1;
    }

    Harl h1;

    std::string msg = argv[1];
    int n = getMessageNumber(msg);

    switch(n)
    {
        case 0:
            h1.complain("DEBUG");
        case 1:
            h1.complain("INFO");
        case 2:
            h1.complain("WARNING");
        case 3:
            h1.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}