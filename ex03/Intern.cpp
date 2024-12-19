#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern() {}


AForm* Intern::makeForm(const std::string& name, const std::string& target)
{ 
    const std::string formNames[3] = {
        "ShrubberyCreationForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm"
    };
    for (int i = 0; i < 3; i++)
    {
        if (formNames[i] == name)
        {
            switch(i){
                case 0:
                {
                    std::cout << "Intern creates " << formNames[i] << "\n";
                    return new ShrubberyCreationForm(target);
                }
                case 1:
                {
                    std::cout << "Intern creates " << formNames[i] << "\n";
                    return new RobotomyRequestForm(target);
                }
                case 2:
                {
                    std::cout << "Intern creates " << formNames[i] << "\n";
                    return new PresidentialPardonForm(target);
                }
            }
        }
    }
    std::cout << "The form was not created\n";
    return NULL;
}