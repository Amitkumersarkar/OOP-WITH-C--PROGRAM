#include <iostream>
#include <string>
using namespace std;
class Teacher
{
    // private access modifier
private:
    double salary;
    // public access modifier
public:
    // attribute or property
    string name;
    string dept;
    string subject;

    // parametrized method
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    /* here we used setter and getter function
    to set value of private modifier and get value
     from private or protected modifier*/

    // setter function
    void setSalary(double s)
    {
        salary = s;
    }

    // getter function
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    // create an objects and call to print out
    Teacher obj;
    obj.name = "Shradha";
    obj.dept = "CSE";
    obj.subject = "CSE-121 (OOP)";

    // here we passing value of setSalary
    obj.setSalary(50000);
    // here we print out get salary from set salary
    cout << "Salary : " << obj.getSalary() << endl;
    cout << "Name : " << obj.name << endl;
    cout << "Dept : " << obj.dept << endl;
    cout << "Subject : " << obj.subject << endl;
    return 0;
}