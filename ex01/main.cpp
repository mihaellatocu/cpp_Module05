#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("ana", -1150);
        std::cout << a<< std::endl;

    } catch(const std::exception& e) {
        std::cerr << e.what();
    }
    std::cout << "******************************\n";
    try {
        Bureaucrat b;
        std::cout << b.getGrade() << "\n";
        std::cout << b.getName()<< "\n";
        b.decrement();
         std::cout << b.getGrade() << "\n";
        std::cout << b.getName()<< "\n";
    } catch (const std::exception & e) {
        std::cerr << e.what();
    }
    std::cout << "******************************\n";
    try {
        Bureaucrat c("nina", 2);
        Bureaucrat d(c);
        std::cout << d.getGrade() << "\n";
        std::cout << d.getName()<< "\n";
    } catch(const std::exception& e) {
        std::cerr << e.what()<< "\n";
    }
    return (0);
}