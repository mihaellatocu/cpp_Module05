#include "../header/Bureaucrat.hpp"
#include "../header/Form.hpp"

int main()
{
    try {
        Bureaucrat A("bureaucrat", 15);
        std::cout << A << std::endl;
        Form Bibi("form", 15, 15);
        std::cout << Bibi << std::endl;
        Bibi.beSigned(A);
        std::cout << Bibi;
        A.signForm(Bibi);
    } catch(const std::exception& e) {
        std::cerr << e.what();
    }
    std::cout << "******************************\n";
    try {
        Bureaucrat A("bureaucrat", 15);
        std::cout << A << std::endl;
        Form b("form", 1, 15);
        std::cout << b << std::endl;
        b.beSigned(A); // is this will throw an error
        A.signForm(b); // the second error will not be catched
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}