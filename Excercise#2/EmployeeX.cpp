// Excercise 2 File Employee.X
#ifndef EMPLOYEE_X
#define EMPLOYEE_X

#include <string>

class Employee {
private:
    std::string firstName;
    int monthlySalary;

public:
    // constructor
    Employee(const std::string& fName, int mSalary);

    // setters
    void setFirstName(const std::string& fName);
    void setMonthlySalary(int mSalary);

    // getters
    std::string getFirstName() const;
    int getMonthlySalary() const;
    int getYearlySalary() const;
};

#endif

