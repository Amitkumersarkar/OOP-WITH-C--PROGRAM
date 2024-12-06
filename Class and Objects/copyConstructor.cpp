#include <iostream>
#include <string>
using namespace std;
class Employee
{

public:
    string name;
    int id;
    string dept;
    double salary;

    // 4 parametrized constructor
    Employee(string name, int id, string dept, double salary)
    {
        // here we used this pointer to the objects

        this->name = name;
        this->id = id;
        this->dept = dept;
        this->salary = salary;
    }

    // custom copy constructor
    Employee(Employee &obj)
    {
        cout << "I am custom copy constructor" << endl;
        // pass by reference
        this->name = obj.name;
        this->id = obj.id;
        this->dept = obj.dept;
        this->salary = obj.salary;
    }

    // getInfo function will print all information
    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "Dept. : " << dept << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    // passing all value in a single line
    Employee obj1("Amit Sarkar", 283, "Jr. Software Engineer", 50000);
    // call getInfo function
    // obj1.getInfo();

    // custom copy constructor
    Employee obj(obj1);
    obj1.getInfo();

    return 0;
}