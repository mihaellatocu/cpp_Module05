#pragma once
#include <iostream>
#include "AForm.hpp"

#define RST "\033[0m"    /* Reset to default color */
#define PINK "\033[1;95m"        /* Pink (Bright Magenta) */
#define SALMON      "\033[38;5;210m" 
#define LIGHT_CORAL "\033[1;31m" /* Light Coral */
//Bold 
# define BOLD_BLACK "\033[1m\033[30m"
# define BOLD_RED "\033[1m\033[31m"
# define BOLD_GREEN "\033[1m\033[32m"
# define BOLD_YELLOW "\033[1m\033[33m"
# define BOLD_BLUE "\033[1m\033[34m"
# define BOLD_MAGENTA "\033[1m\033[35m"
# define BOLD_CYAN "\033[1m\033[36m"
# define B_W "\033[1m\033[37m"

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };

    void increment();
    void decrement();

    std::string getName() const;
    int getGrade() const;

    void signForm(AForm& s);
    void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);
