#include <iostream>
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
};

int main()
{
    // create an objects and call to print out
    Teacher obj;
    obj.name = "Shradha";
    obj.dept = "CSE";
    obj.subject = "CSE-121";
    cout << obj.name << endl;
    cout << obj.dept << endl;
    cout << obj.subject << endl;
    return 0;
}