#include <iostream>
using namespace std;
class Student
{
public:
    char name;
    float gpa;
    int id;
};

int
main()
{
    Student s;
    s.gpa = 3.5;
    cout << "gpa is :" << s.gpa<< endl;
}