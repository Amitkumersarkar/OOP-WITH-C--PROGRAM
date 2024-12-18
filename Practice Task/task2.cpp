#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int id;
    string dept;
    int sec;
    // here we used display method to print the output
    // void display()
    // {
    //     cout << "Department : " << s1.dept << endl;
    // }

    /* here we used getter and setter method*/
    string getDept()
    {
        return dept;
    }

    int getSec()
    {
        return sec;
    }
    // here we set the value of private properties
    void setDept(string d)
    {
        dept = d;
    }
    void setSec(int s)
    {
        sec = s;
    }
};

int main()
{
    // create an objects
    Student s1;
    // Student s2;
    s1.name = "Amit";
    s1.id = 283;
    cout << "Name : " << s1.name << endl;
    cout << "ID : " << s1.id << endl;
    // cout << "Dept : " << s2.getDept() << endl;
    // cout << "Sec : " << s2.getSec() << endl;

    // used setter
    // s2.dept = 'cse';
    // s2.setSec(10);

    return 0;
}