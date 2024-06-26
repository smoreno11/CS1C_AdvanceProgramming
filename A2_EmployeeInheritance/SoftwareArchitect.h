#ifndef SOFTWAREARCHITECT_H_
#define SOFTWAREARCHITECT_H_

#include "header.h"
#include "Employee.h"

class SoftwareArchitect: public Employee{

  public:
    SoftwareArchitect()
    {
      departmentNumber = 0;
      supervisorsName = "";
      percentSalaryIncrease = 0;
      yearsOfExperience = 0;
    }

    SoftwareArchitect(Employee employed, int departmentNumber, std::string supervisorsName, 
                      int percentSalaryIncrease, int yearsOfExperience) : employed(employed),
                      departmentNumber(departmentNumber), supervisorsName(supervisorsName), 
                      percentSalaryIncrease(percentSalaryIncrease), yearsOfExperience(yearsOfExperience) 
    {

    }

    int getDepartmentNumber()
    {
      return departmentNumber;
    }

    void setDepartmentNumber(int departmentNumber)
    {
      this->departmentNumber = departmentNumber;
    }

    std::string getSupervisorsName()
    {
      return supervisorsName;
    }

    void setSupervisorsName(std::string supervisorsName)
    {
      this->supervisorsName = supervisorsName;
    }

    int getPercentSalaryIncrease()
    {
      return percentSalaryIncrease;
    }

    void setPercentSalaryIncrease(int percentSalaryIncrease)
    {
      this->percentSalaryIncrease = percentSalaryIncrease;
    }

    int getYearsOfExperience()
    {
      return yearsOfExperience;
    }

    void setYearsOfExperience(int yearsOfExperience)
    {
      this->yearsOfExperience = yearsOfExperience;
    }

    void printHeader()
    {
      std::cout << std::left;
      std::cout << std::setw(SET_NAME) << "Name" << std::setw(SET_ID) << "Department"
                << std::setw(SET_SUPER) << "Supervisor's Name" << std::setw(SET_GEN) << "Raise %"
                << std::setw(SET_LANGUAGE) << "Years of Experience";
      std::cout << std::right;
      std::cout << std::endl;
    }

    void printArchitect()
    {
      employed.printEmployee();
      printHeader();

      std::cout << std::left;
      std::cout << std::setw(SET_NAME) << employed.getEmployee() << std::setw(SET_ID) << departmentNumber
                << std::setw(SET_SUPER) << supervisorsName << std::setw(SET_GEN) << percentSalaryIncrease
                << std::setw(SET_LANGUAGE) << yearsOfExperience;
      std::cout << std::right;
      std::cout << std::endl << std::endl;
    }


    /*Overrided functions*/
    std::string getEmployee()
    {
      return employed.getEmployee();
    }

    void setEmployee(std::string employee)
    {
      employed.setEmployee(employee);
    }

    int getEmployeeId()
    {
      return employed.getEmployeeId();
    }

    void setEmployeeId(int employeeId)
    {
      employed.setEmployeeId(employeeId);
    }

    long getPhoneNumber()
    {
      return employed.getPhoneNumber();
    }

    void setPhoneNumber(long phoneNumber)
    {
      employed.setPhoneNumber(phoneNumber);
    }

    int getAge()
    {
      return employed.getAge();
    }

    void setAge(int age)
    {
      employed.setAge(age);
    }

    char getGender()
    {
      return employed.getGender();
    }

    void setGender(char gender)
    {
      employed.setGender(gender);
    }

    std::string getJobTitle()
    {
      return employed.getJobTitle();
    }

    void setJobTitle(std::string jobTitle)
    {
      employed.setJobTitle(jobTitle);
    }

    double getSalary()
    {
      return employed.getSalary();
    }

    void setSalary(double salary)
    {
      employed.setSalary(salary);
    }

    Date getHireDate()
    {
      return employed.getHireDate();
    }

    void setHireDate(Date hireDate)
    {
      employed.setHireDate(hireDate);
    }

  private:
    int departmentNumber;
    std::string supervisorsName;
    int percentSalaryIncrease;
    int yearsOfExperience;
    Employee employed;
};

#endif