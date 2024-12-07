#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

class Teacher
{
public:
    string subj;
    double salary;
};

// here TA (child class) inheriting two parent class
class TA : public Student, public Teacher
{
};

int main()
{
    TA t1;
    t1.name = "Amrito Sarkar";
    t1.subj = "Computer Science";
    cout << "Name : " << t1.name << endl;
    cout << "Subject : " << t1.subj << endl;
    return 0;
}