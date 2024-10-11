#include <iostream>
#include <memory>
#include <string>
#include <vector>

// Abstract Base Class
class Employee {
protected:
  std::string name;
  int id;

public:
  Employee(const std::string &empName, int empId) : name(empName), id(empId) {}
  virtual ~Employee() {}

  virtual void displayInfo() const = 0; // Pure virtual function
};

// Derived Class: FullTimeEmployee
class FullTimeEmployee : public Employee {
private:
  double annualSalary;

public:
  FullTimeEmployee(const std::string &empName, int empId, double salary)
      : Employee(empName, empId), annualSalary(salary) {}

  void displayInfo() const override {
    std::cout << "Full-Time Employee - ID: " << id << ", Name: " << name
              << ", Annual Salary: $" << annualSalary << std::endl;
  }
};

// Derived Class: PartTimeEmployee
class PartTimeEmployee : public Employee {
private:
  double hourlyRate;
  int hoursWorked;

public:
  PartTimeEmployee(const std::string &empName, int empId, double rate,
                   int hours)
      : Employee(empName, empId), hourlyRate(rate), hoursWorked(hours) {}

  void displayInfo() const override {
    std::cout << "Part-Time Employee - ID: " << id << ", Name: " << name
              << ", Hourly Rate: $" << hourlyRate
              << ", Hours Worked: " << hoursWorked << std::endl;
  }
};

// Company Class managing Employees
class Company {
private:
  std::vector<std::shared_ptr<Employee>> employees;

public:
  void addEmployee(const std::shared_ptr<Employee> &emp) {
    employees.push_back(emp);
  }

  void showAllEmployees() const {
    for (const auto &emp : employees) {
      emp->displayInfo();
    }
  }
};

int main() {
  Company myCompany;

  // Creating employees
  std::shared_ptr<Employee> emp1 =
      std::make_shared<FullTimeEmployee>("Alice Johnson", 101, 75000);
  std::shared_ptr<Employee> emp2 =
      std::make_shared<PartTimeEmployee>("Bob Smith", 102, 25, 1200);

  // Adding employees to the company
  myCompany.addEmployee(emp1);
  myCompany.addEmployee(emp2);

  // Displaying all employees
  myCompany.showAllEmployees();
  // Output:
  // Full-Time Employee - ID: 101, Name: Alice Johnson, Annual Salary: $75000
  // Part-Time Employee - ID: 102, Name: Bob Smith, Hourly Rate: $25, Hours
  // Worked: 1200

  return 0;
}

/*
Explanation:
- **Abstract Base Class (`Employee`):** Defines a common interface for all
employees with a pure virtual function `displayInfo()`.
- **Derived Classes (`FullTimeEmployee` and `PartTimeEmployee`):** Implement
`displayInfo()` to display specific information relevant to each employee type.
- **Company Management:** The `Company` class manages a collection of `Employee`
objects using a `vector` of `shared_ptr<Employee>`. It can add employees and
display information for all employees.
- **Polymorphism:** Allows the `Company` class to handle different types of
employees uniformly.
- **Output:**
    Full-Time Employee - ID: 101, Name: Alice Johnson, Annual Salary: $75000
    Part-Time Employee - ID: 102, Name: Bob Smith, Hourly Rate: $25, Hours
Worked: 1200
*/
