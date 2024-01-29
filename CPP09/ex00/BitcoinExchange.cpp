#include "BitcoinExchange.hpp"

// save the db
int saveDataBase(std::string dbFileName, std::map<std::string,double>& db) {
    const char* dbcStr = dbFileName.c_str();
    std::ifstream file(dbcStr);

    if (!file.is_open()) {
        std::cerr << "Error: Failed at opening the file" << '\n';
        return -1;
    }

    std::string line;
    
    std::getline(file, line);
    while (std::getline(file, line)) {
        std::string date = getDataBaseDate(line);
        double      price = getDataBasePrice(line);
        if (price == -1)
            continue;
        db.insert(std::pair<std::string,double>(date,price));
    }
    return 0;
}

std::string getDataBaseDate(std::string line) {
    std::string date;
    std::size_t pos = line.find(',');

    date = line.substr(0, pos);
    return date;
}

double getDataBasePrice(std::string line) {
    std::size_t pos = line.find(',');
    std::string value = line.substr(pos + 1);

    if (pos == std::string::npos || value.find_first_not_of(" \t\n\v\f\r") == std::string::npos) {
        return -1;
    }

    const char* cStr = value.c_str();

    char* endPtr;
    double price = strtod(cStr, &endPtr);

    if (*endPtr != '\0') {
        return -1;
    }
    return price;
}

// parse input file
// void        parseInputFile(std::string inputFileName) {

// }

// .1 returns true
bool        isValidLineFormat(std::string inputFileName) { 
    std::size_t i;
    std::size_t flag = 0;

    for (i = 0; i < 4; ++i) {
        if (!isdigit(inputFileName[i]))
            return false;
    }
    if (inputFileName[i++] != '-')
        return false;
    if (!isdigit(inputFileName[i])|| !isdigit(inputFileName[i+1]))
        return false;
    else
        i+=2;
    if (inputFileName[i++] != '-')
        return false;
    if (!isdigit(inputFileName[i])|| !isdigit(inputFileName[i+1]))
        return false;
    else
        i+=2;
    if (inputFileName[i++] != ' ')
        return false;
    if (inputFileName[i++] != '|')
        return false;
    if (inputFileName[i++] != ' ')
        return false;
    for (; i < inputFileName.size(); ++i) {
        if (inputFileName[i] == '.') {
            flag++;
            i++;
        }
        if (flag > 1)
            return false;
        if (!isdigit(inputFileName[i]))
            return false;
    }
    return true;
}

std::string getInputFileDate(std::string line) {
    std::size_t pos = line.find(' ');
    std::string date = line.substr(0, pos);
    std::size_t flag = 0;

    pos = date.find('-') + 1;
    std::size_t pos2 = pos + 1;

    // std::cout << date << " " << "pos = " << pos << " " << date[pos] << " " << date[pos2] << '\n'; 

    if (date[pos] == '0' && date[pos2] == '0') {
        flag = 1;  
    }
    else if (date[pos] > '1') {
        flag = 1;
    }
    else if (date[pos] == '1' && date[pos2] > '2') {
        flag = 1;
    }
    
    if (flag) {
        std::cerr << "Error: bad input => " << date << '\n';
        return "";
    }
    return date;
}

// int         getInputFilePrice(std::string line) {

// }

// double      fetchDataBasePrice(std::map<std::string, double> db, std::string date) {

// }