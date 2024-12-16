//
// Created by nisha on 11/6/2024.
//

#include <iostream>
#include <memory>
#include <memory>
#include <string>
#include <vector>

class Employee
{
public:
    std::string name;
    std::vector<std::shared_ptr<Employee>> subordinates;

    explicit Employee(const std::string& _name):name(_name){}

    void addEmployee (const std::shared_ptr<Employee>& employee)
    {
        subordinates.push_back(employee);
    }

    void printHirarchey (int indent = 0) const
    {
        std::cout << std::string(indent, ' ') << name << std::endl;
        for (const auto& subordinate : subordinates)
        {
            subordinate->printHirarchey(indent + 2);
        }
    }

};

int main(int argc, char* argv[])
{
    std::shared_ptr<Employee> ceo = std::make_shared<Employee>("CEO");
    std::shared_ptr<Employee> manager = std::make_shared<Employee> ("Manager");
    std::shared_ptr<Employee> worker = std::make_shared<Employee> ("Worker");

    ceo->addEmployee(manager);
    manager->addEmployee(worker);

    ceo->printHirarchey();

    return 0;
}



//
// class Employee
// {
// public:
//     std::string name;
//     std::vector<std::shared_ptr<Employee>> subordinates;
//
//     explicit Employee(const std::string& _name):name(_name){}
//
//     void addSubordinates(const std::shared_ptr<Employee>& employee)
//     {
//         subordinates.push_back(employee);
//     }
//
//     void printHirarchey (int indent = 0) const
//
//     {
//         std::cout <<std::string(indent, ' ') << name << std::endl;
//         for (const auto& subordinate:subordinates)
//         {
//             subordinate-> printHirarchey(indent +2);
//         }
//     }
// };
//
//
// int main()
// {
//
//      std::shared_ptr<Employee>  ceo = std::make_shared<Employee>("CEO");
//      std::shared_ptr<Employee>  manager = std::make_shared<Employee>("Manager");
//      std::shared_ptr<Employee>  worker = std::make_shared<Employee>("Worker");
//
//     ceo->addSubordinates(manager);
//     manager->addSubordinates(worker);
//
//     ceo->printHirarchey();
//     return  0;
//
// }
//
//






















