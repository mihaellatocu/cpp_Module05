#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("anne", 149);
        std::cout << a.getName() << ", bureaucrat grade " << a.getGrade() <<   std::endl;
        a.decrementGrade();
        a.decrementGrade();
        Bureaucrat b("ar", 1);
        b.incrementGrade();
       // b.incrementGrade();
       
    } catch (const std::exception& e){
        std::cout << e.what();
    }
    return (0);
}