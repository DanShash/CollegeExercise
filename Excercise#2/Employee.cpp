//Excercise #2 Employee.x function
#include "EmployeeX"

Employee::Employee(const std::string& fName, int mSalary)
    : firstName(fName), monthlySalary(mSalary)
{
}

void Employee::setFirstName(const std::string& fName)
{
    firstName = fName;
}

void Employee::setMonthlySalary(int mSalary)
{
    if (mSalary > 0) {
        monthlySalary = mSalary;
    } else {
        monthlySalary = 0;
    }
}

std::string Employee::getFirstName() const
{
    return firstName;
}

int Employee::getMonthlySalary() const
{
    return monthlySalary;
}

int Employee::getYearlySalary() const
{
    return 12 * monthlySalary;
}
