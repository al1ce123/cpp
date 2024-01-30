#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "usage ./btc <input.txt>" << '\n';
        return -1;
    }

    std::map<std::string, double> db;

    saveDataBase("data.csv", db);
    if (parseInputFile(argv[1], db) == -1) {
        return -1;
    }
    return 0;
}


// int main() {
//     std::map<std::string, double> m;

//     m.insert(std::pair<std::string, double>("test",9.658));

//     std::map<std::string, double>::iterator it;

//     it = m.find("test");

//     std::cout << it->second << '\n';
//     return 0;
// }