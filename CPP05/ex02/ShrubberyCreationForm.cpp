#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm(src) {
    *this = src;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {}

// Copy assignment operator overload
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
    this->_target = rhs._target;
    this->setState(rhs.getState());
    return *this;
}

// Member function
void ShrubberyCreationForm::executeFormAction() const {
    std::string filename = this->_target + "_shrubbery";
    std::ofstream ofs(filename.c_str(), std::ios::out);

    if (ofs)
    {
        ofs << "  _                      \n";
        ofs << " | |_ _ __ ___  ___  ___ \n";
        ofs << " | __| '__/ _ \\/ _ \\/ __|\n";
        ofs << " | |_| | |  __/  __/\\__ \\\n";
        ofs << "  \\__|_|  \\___|\\___||___/\n\n";

        ofs << "          .     .  .      +     .      .          .\n";
        ofs << "     .       .      .     #       .           .\n";
        ofs << "        .      .         ###            .      .      .\n";
        ofs << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
        ofs << "          .      . \"####\"###\"####\"  .\n";
        ofs << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n";
        ofs << "  .             \"#########\"#########\"        .        .\n";
        ofs << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
        ofs << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
        ofs << "                .\"##\"#####\"#####\"##\"           .      .\n";
        ofs << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
        ofs << "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n";
        ofs << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
        ofs << "            .     \"      000      \"    .     .\n";
        ofs << "       .         .   .   000     .        .       .\n";
        ofs << ".. .. ..................O000O........................ ...... ...\n";

        ofs.close();
    }
}

