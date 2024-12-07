#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int id;
};

class Teacher : public Person
{
public:
    string subj;
};

int main()
{
    Person p1;
    p1.name = "Amit Sarkar";
    p1.age = 22;
    cout << p1.name << endl;
    cout << p1.age << endl;
}