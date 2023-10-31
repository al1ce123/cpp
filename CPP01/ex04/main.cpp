#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        std::cerr << "Usage: " << "./sed" << " replace in <filename> <word> by <new_word>" << std::endl;
        return 1;
    }

    std::string str1 = argv[2];
    std::string str2 = argv[3];

    std::string filename = argv[1];
    std::string newfilename = filename + ".replace";

    std::string line;

    std::ifstream ifs(filename.c_str());
    if (!ifs.is_open()) {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }

    std::ofstream ofs(newfilename.c_str());
    if (!ofs.is_open()) {
        std::cerr << "Failed to open the output file." << std::endl;
        return 1;
    }

    while (std::getline(ifs, line)) {
        size_t pos = 0;
        while ((pos = line.find(str1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + str2 + line.substr(pos + str1.length());
            pos += str2.length();
        }
        ofs << line << std::endl;
    }

    ifs.close();
    ofs.close();

    return 0;
}