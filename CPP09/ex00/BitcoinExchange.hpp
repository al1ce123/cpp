#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <map>

#define MAX_INT 2147483647

int         saveDataBase(std::string dbFileName, std::map<std::string,double>& db);
std::string getDataBaseDate(std::string line);
double      getDataBasePrice(std::string line);
bool        isValidLineFormat(std::string line);
std::string getInputFileDate(std::string line);
double      getInputFilePrice(std::string line);
// int         createTempDataBase(std::map<std::size_t, std::string>& temp, std::string dbFileName);
int         getYear(std::string date);
int         getMonth(std::string date);
int         getDay(std::string date);
double      fetchDataBasePrice(std::map<std::string, double> db, std::string dateToFetch);
int         parseInputFile(std::string inputFileName, std::map<std::string, double> db);
