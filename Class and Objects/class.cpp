#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
    // attributes
    string name;
    int id;
    string dept;
    // method
    void changeDept(string newDept)
    {

        dept = newDept;
    }
};
int main()
{
    Student obj;
    obj.name = "Amit Sarkar";
    obj.dept = "CSE";
    obj.id = 283;
    // obj.changeDept( );
    cout << obj.name << endl;
    return 0;
};