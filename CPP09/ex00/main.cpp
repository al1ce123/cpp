#include "BitcoinExchange.hpp"

// steps

// 1) save the csv file into a map container
// 2) check the intput file
// 3) display the lines one by one

int main(int argc, char *argv[]) {

    (void)argc;
    (void)argv;

    // if (argc != 2) {
    //     std::cerr << "usage ./btc <input.txt>" << '\n';
    //     return -1;
    // }

    std::map<std::string, double> db;

    saveDataBase("test.txt", db);

    std::cout << db["hola"] << '\n';

    return 0;
}

