#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName();
    os << ", bureaucrat grade ";
    os << bureaucrat.getGrade();
    os << ".";
    return os;
}

const char*  Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("The grade is too low. The lowest should be 150.\n");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("The grade is too high. The highest grade should be 1.\n");
}

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (_grade < 1)
        throw GradeTooHighException();
    if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
    return _name;
}
int Bureaucrat::getGrade() const
{
    return _grade;
}

void  Bureaucrat::incrementGrade()
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}
void Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}
