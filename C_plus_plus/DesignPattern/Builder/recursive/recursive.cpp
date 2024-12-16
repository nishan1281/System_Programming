
#include <string>
#include <vector>
#include"iostream"

class Employee
{
public:
    std::string name;
    std::vector<Employee*> subordinates;

    explicit Employee(const std::string& _name): name(_name){}

    ~Employee()
    {
        for (auto subordinate:subordinates)
        {
            delete subordinate;
        }
    }

    void addEmployee(Employee* employee)
    {
        subordinates.push_back(employee);
    }

    void printHirarchey(int indent = 0) const
    {
        std::cout << std::string(indent, ' ') << name << std::endl;
        for (auto subordinate:subordinates)
        {
            subordinate->printHirarchey(indent+2);
        }
    }
};

int main()
{
    Employee* boss = new Employee("Boss");
    Employee* manager = new Employee("Manager");
    Employee* worker = new Employee("Worker");


    boss->addEmployee(manager);
    manager->addEmployee(worker);

    boss->printHirarchey();

    delete boss;
    return 0;
}






// #include <iostream>
// #include <vector>
// #include <string>
//
// class Employee {
// public:
//     std::string name;
//     std::vector<Employee*> subordinates;
//
//     // Constructor to initialize the employee name
//     Employee(const std::string& _name) : name(_name) {}
//
//     // Destructor to delete all subordinates recursively
//     ~Employee() {
//         for (auto subordinate : subordinates) {
//             delete subordinate;
//         }
//     }
//
//     // Adds a subordinate to the current employee
//     void addSubordinate(Employee* employee) {
//         subordinates.push_back(employee);
//     }
//
//     // Prints the hierarchy with indentation
//     void printHierarchy(int indent = 0) const {
//         std::cout << std::string(indent, ' ') << name << std::endl;
//         for (auto subordinate : subordinates) {
//             subordinate->printHierarchy(indent + 2);
//         }
//     }
// };
//
// int main() {
//     Employee* ceo = new Employee("CEO");
//     Employee* manager = new Employee("Manager");
//     Employee* worker = new Employee("Worker");
//
//     ceo->addSubordinate(manager);
//     manager->addSubordinate(worker);
//
//     ceo->printHierarchy();
//
//     // Deletes the CEO, which also recursively deletes all subordinates
//     delete ceo;
//
//     return 0;
// }
