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

    // parametrized constructor
    Employee(string n, int i, string d, double s)
    {
        name = n;
        id = i;
        dept = d;
        salary = s;
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
    Employee obj("Amit Sarkar", 283, "Jr. Software Engineer", 50000);
    // call getInfo function
    obj.getInfo();
}