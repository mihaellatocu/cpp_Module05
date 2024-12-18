#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("anne", 149);
        std::cout << a << " a fost a " << std::endl;
        a.decrementGrade();
        std::cout << a << " a fost a " << std::endl;
        a.decrementGrade();
        std::cout << a << " a fost a " << std::endl;
       
    } catch (const std::exception& e){
        std::cout << e.what();
    }
    std::cout << "********************\n";
    try {
        Bureaucrat A("Lina", -40);
        std::cout << A << std::endl;
    } catch(const Bureaucrat::GradeTooHighException& e) {
        std::cerr << e.what();
        std::cout << "grade was  -40\n";
    } catch(const Bureaucrat::GradeTooLowException& e) {
        std::cerr <<e.what();
    }
    std::cout << "********************\n";
    try {
        Bureaucrat B("mama", 1);
        std::cout << B << std::endl;
        B.incrementGrade();
        std::cout << B << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what();
    }


    return (0);
}