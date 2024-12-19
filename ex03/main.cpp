#include "Bureaucrat.hpp"
//#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << "******************************\n";
    Bureaucrat A("bureaucrat", 5);
    Intern RandomIntern;
    AForm* form;
    form = RandomIntern.makeForm("ShrubberyCreationForm", "Bender");
    if (form)
    {
        std::cout << *form << std::endl;
        A.signForm(*form);
        form->execute(A);
        delete form;
    }

    return (0);
}