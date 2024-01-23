//Excercise #2 Main Function
#include <iostream>
#include "EmployeeX"

int main()
{
    // two Employee objects
    Employee emp1("Daniels", 5000);
    Employee emp2("Markus", 6000);

    // salary raise of each Employee by 10%
    int emp1Salary = emp1.getMonthlySalary();
    emp1.setMonthlySalary(emp1Salary * 1.1);

    int emp2Salary = emp2.getMonthlySalary();
    emp2.setMonthlySalary(emp2Salary * 1.1);

    //  Employee's new yearly salary
    std::cout << emp1.getFirstName() << "'s new yearly salary is: " << emp1.getYearlySalary() << std::endl;
    std::cout << emp2.getFirstName() << "'s new yearly salary is: " << emp2.getYearlySalary() << std::endl;

    return 0;
}
