#include <iostream>
using namespace std;

// parent class
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

    void Display()
    {
    }
};
// child class

class Student : public Person
{
public:
    int id;
    string dept;

    void getInfo()
    {
        cout << "Hello, My name is : " << name << endl;
        cout << "Hello, My age is : " << age << endl;
        cout << "Hello, My id is : " << id << endl;
        cout << "Hello, My dept is : " << dept << endl;
    }
};

int main()
{
    Student obj;
    obj.name = "Amit";
    obj.age = 24;
    obj.id = 283;
    obj.dept = "CSE";
    // call the function
    obj.getInfo();
}
