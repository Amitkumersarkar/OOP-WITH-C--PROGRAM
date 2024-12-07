#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
};

// here inheriting person class into student class
class Student : public Person
{
public:
    int id;
};
// here inheriting student class into Grad-student class
class GradStudent : public Student
{
public:
    string researchArea;
};
int main()
{
    GradStudent s1;
    s1.name = "Amit Sarkar";
    s1.researchArea = "Artificial intelligences";
    cout << "Name : " << s1.name << endl;
    cout << "ResearchArea : " << s1.researchArea << endl;
    return 0;
}