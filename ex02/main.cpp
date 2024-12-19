#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try {
        Bureaucrat A("bureaucrat", 5);
        std::cout << A << std::endl;

        ShrubberyCreationForm C("home");
        // PresidentialPardonForm C("target");
        // RobotomyRequestForm C("robot");
        C.execute(A);

    } catch(const std::exception& e) {
        std::cerr << e.what();
    }
    std::cout << "******************************\n";
    
    return (0);
}