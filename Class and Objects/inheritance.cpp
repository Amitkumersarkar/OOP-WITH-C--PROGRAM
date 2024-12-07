#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }

    // non parameterized constructor
    Person()
    {
    }
};

// declared inheritance here
class Student : public Person
{
public:
    // name, age,id
    int id;
    // getInfo print all information of parent and child class
    void getInfo()
    {
        cout << "Student Name : " << name << endl;
        cout << "Student Age : " << age << endl;
        cout << "Student ID : " << id << endl;
    }
};

int main()
{
    // here create an objects
    Student s1;
    s1.name = "Amit Sarkar";
    s1.age = 22;
    s1.id = 283;
    // call getInfo for s1
    s1.getInfo();
    return 0;
}