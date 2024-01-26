#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <map>
#include <fstream>


// step one save the db
int         saveDataBase(std::string dbFileName, std::map<std::string,double> db);
std::string getDate(std::string line);
double      getPrice(std::string line);