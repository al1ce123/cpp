#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "usage ./btc <input.txt>" << '\n';
        return 1;
    }

    std::map<std::string, double> db;

    saveDataBase("data.csv", db);
    if (parseInputFile(argv[1], db) == -1) {
        return 1;
    }
    return 0;
}
