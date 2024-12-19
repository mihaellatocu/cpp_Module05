#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
     AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::cout << "Make drilling noise\n";

    if (this->getToExecute() >= executor.getGrade())
    {
        std::cout << _target << " The file will be created.\n";
        std::string nameFile = _target + "_shrubbery";
        std::ofstream MyFile(nameFile.c_str());
        MyFile << "       #\n"
        << "      ###\n"
        << "     #####\n"
        << "    #######\n"
        << "   #########\n"
        << "  ###########\n"
        << " #############\n"
        << "###############\n"
        << "       H\n"
        << "       H\n"
        << "       H\n";
        MyFile.close();
    }
    else
    {
        std::cout << "The file was not created.\n";
        throw GradeTooLowException();
    }
}