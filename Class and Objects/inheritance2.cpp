#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

// declared inheritance here
class Student : public Person
{
public:
    // name, age,id
    int id;
    // calling constructor
    Student(string name, int age, int id) : Person(name, age)
    {
        this->id = id;
    }

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
    Student s1("Amit Sarkar", 22, 283);
    // call getInfo for s1
    s1.getInfo();
    return 0;
}