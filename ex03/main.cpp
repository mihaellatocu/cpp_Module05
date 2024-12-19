#include "Bureaucrat.hpp"
//#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    // try {
    //     Bureaucrat A("bureaucrat", 5);
    //     std::cout << A << std::endl;

    //     ShrubberyCreationForm C("home");
    //     // PresidentialPardonForm C("target");
    //     // RobotomyRequestForm C("robot");
    //     C.execute(A);

    // } catch(const std::exception& e) {
    //     std::cerr << e.what();
    // }
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
    
    // form(A);
    // if (form)
    // {
    //     std::cout << *form << std::endl;
    // }
    return (0);
}