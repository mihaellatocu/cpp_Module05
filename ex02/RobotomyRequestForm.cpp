#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (std::string target) :
     AForm("RobotomyRequestForm", 75, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm () {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::cout << "Make drilling noise\n";
    if (this->getToExecute() >= executor.getGrade())
        std::cout << _target << " has been robotomized successfully 50% of the time.\n";
    else
    {
        std::cout << "The robotomy failed.\n";
        throw GradeTooLowException();
    }
}