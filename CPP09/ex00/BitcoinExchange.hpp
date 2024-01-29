#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <map>
#include <fstream>


// save the db
int         saveDataBase(std::string dbFileName, std::map<std::string,double>& db);
std::string getDataBaseDate(std::string line);
double      getDataBasePrice(std::string line);

// parse input file
void        parseInputFile(std::string inputFileName);
bool        isValidLineFormat(std::string inputFileName);
std::string getInputFileDate(std::string line);
int         getInputFilePrice(std::string line);

