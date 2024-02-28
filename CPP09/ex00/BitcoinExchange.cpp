#include "BitcoinExchange.hpp"

int saveDataBase(std::string dbFileName, std::map<std::string,double>& db) {
    const char* dbcStr = dbFileName.c_str();
    std::ifstream file(dbcStr);

    if (!file.is_open()) {
        std::cerr << "Error: Failed at opening the file" << '\n';
        return -1;
    }

    std::string line;
    std::string date;
    double price;

    std::getline(file, line);
    while (std::getline(file, line)) {
        date = getDataBaseDate(line);
        price = getDataBasePrice(line);
        if (price == -1)
            continue;
        db.insert(std::pair<std::string,double>(date,price));
    }
    file.close();
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

bool isValidLineFormat(std::string line) {
    std::size_t i;
    std::size_t flag = 0;

    for (i = 0; i < 4; ++i) {
        if (!isdigit(line[i]))
            return false;
    }
    if (line[i++] != '-')
        return false;
    if (!isdigit(line[i])|| !isdigit(line[i+1]))
        return false;
    else
        i+=2;
    if (line[i++] != '-')
        return false;
    if (!isdigit(line[i])|| !isdigit(line[i+1]))
        return false;
    else
        i+=2;
    if (i >= line.size())
        return true;
    if (line[i++] != ' ')
        return false;
    if (line[i++] != '|')
        return false;
    if (line[i++] != ' ')
        return false;
    if (line[i] == '-')
        i++;
    for (; i < line.size(); ++i) {
        if (line[i] == '.') {
            flag++;
            i++;
        }
        if (flag > 1)
            return false;
        if (!isdigit(line[i]))
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

    pos += 3;
    pos2 += 3;

    if (date[pos] == '0' && (date[pos2] == '0' || !date[pos2])) {
        flag = 1;  
    }
    else if (date[pos] > '3') {
        flag = 1;
    }
    else if (date[pos] == '3' && date[pos2] > '1') {
        flag = 1;
    }
    
    if (flag) {
        std::cerr << "Error: bad input => " << date << '\n';
        return "";
    }
    return date;
}

double getInputFilePrice(std::string line) {
    std::size_t pos = line.find_last_of(' ');
    std::string value = line.substr(pos + 1);

    const char* cStr = value.c_str();

    char* endPtr;
    double price = strtod(cStr, &endPtr);

    if (*endPtr != '\0') {
        return -1;
    }
    if (price > MAX_INT) {
        std::cerr << "Error: too large a number." << '\n';
        return -1;
    }
    else if (price < 0) {
        std::cerr << "Error: not a positive number." << '\n';
        return -1;

    }
    return price;
}

int getYear(std::string date) {
    std::string year = date.substr(0, 4);
    int res = atoi(year.c_str());
    return res;
}

int getMonth(std::string date) {
    std::string month = date.substr(5, 2);
    int res = atoi(month.c_str());
    return res;
}

int getDay(std::string date) {
    std::string day = date.substr(8, 2);
    int res = atoi(day.c_str());
    return res;  
}

double fetchDataBasePrice(std::map<std::string, double> db, std::string dateToFetch) {
    int y = getYear(dateToFetch);
    int m = getMonth(dateToFetch);
    int d = getDay(dateToFetch);

    if (y < 2009 || y > 2022) {
        std::cerr << "Error: date unavailable." << '\n';
        return -1;
    }
    else if (y == 2009 && m == 1 && d == 1) {
        std::cerr << "Error: date unavailable." << '\n';
        return -1;
    }
    else if (y == 2022 && m > 3) {
        std::cerr << "Error: date unavailable." << '\n';
        return -1;
    }
    else if (y == 2022 && m == 3 && d > 9) {
        std::cerr << "Error: date unavailable." << '\n';
        return -1;
    }

    std::map<std::string, double>::iterator it = db.end();
    int day;
    std::string newDate;

    while (it == db.end()) {
        it = db.find(dateToFetch);
        if (it != db.end()) {
            return it->second;
        }
        else {
            day = getDay(dateToFetch);
            if (day > 1)
                day--;
        }
        std::stringstream ss;
        ss << day;
        if (day < 9) {
            newDate = dateToFetch.substr(0,8) + '0' + ss.str();
        } else {
            newDate = dateToFetch.substr(0,8) + ss.str();
        }
        return fetchDataBasePrice(db, newDate);
    }
    return -1;
}

int parseInputFile(std::string inputFileName, std::map<std::string, double> db) {
    const char* dbcStr = inputFileName.c_str();
    std::ifstream file(dbcStr);

    if (!file.is_open()) {
        std::cerr << "Error: Failed at opening the file" << '\n';
        return -1;
    }

    double dbFilePrice = 0.0;
    double inputFilePrice = 0.0;
    std::string dateToFetch;
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) {
        if (isValidLineFormat(line)) {
            dateToFetch = getInputFileDate(line);
            if (dateToFetch == "")
                continue;
            inputFilePrice = getInputFilePrice(line);
            if (inputFilePrice == -1)
                continue;
            dbFilePrice = fetchDataBasePrice(db, dateToFetch);
            if (dbFilePrice == -1)
                continue;
            std::cout << getInputFileDate(line) << " => " << inputFilePrice << " = "<< "\033[33m" << inputFilePrice * dbFilePrice << "\033[0m" << '\n';
        }
        else {
            if (!line.empty())
                std::cout << "Error: wrong format" << '\n';
        }
    }
    return 0;
}
