#include "BitcoinExchange.hpp"

// bool        validateFile(std::string inputFileName) {

// }

// bool        isValidLine(std::string line) {

// }

// bool        isValidDate(std::string line) {

// }

// bool        isValidValue(double value) {

// }

int        saveDataBase(std::string dbFileName, std::map<std::string,double> db) {

    const char* dbcStr = dbFileName.c_str();
    std::ifstream file(dbcStr);

    if (!file.is_open()) {
        std::cerr << "Error: Failed at opening the file" << '\n';
        return -1;
    }

    std::string line;

    while (std::getline(file, line)) {
        
        std::string date = getDate(line);
        double price = getPrice(line);

        db.insert(std::pair<std::string,double>(date,price));
    }

    return 0;
}

std::string getDate(std::string line) {
    std::string date;
    std::size_t commaPos = 0;

    for (std::size_t i = 0; i < line.size(); ++i) {
        if (line[i] == ',')
            commaPos = i;
    }

    date = line.substr(0, commaPos);
    return date;
}

double      getPrice(std::string line) {
    std::size_t commaPos = 0;

    for (std::size_t i = 0; i < line.size(); ++i) {
        if (line[i] == ',')
            commaPos = i + 1;
    }

    const char* cStr;
    cStr = line.substr(commaPos).c_str();

    char* endPtr;
    double price = strtod(cStr, &endPtr);

    if (*endPtr != '\0') {
        std::cerr << "Error: Unable to convert string to double." << '\n';
        return 0.0;
    }

    return price;
}



// int         getYear(std::string line) {

// }

// int         getMonth(std::string line) {

// }

// int         getDay(std::string line) {

// }


