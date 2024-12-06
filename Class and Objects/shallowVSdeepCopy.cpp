#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    double *gpaPtr;

    // parameterized constructor
    Student(string name, double gpa)
    {
        this->name = name;
        // allocating new memory in the heap memory section
        gpaPtr = new double;
        // dereference
        *gpaPtr = gpa;
        // this->gpa = gpa;
    }

    Student(Student &obj1)
    {
        this->name = name;
        this->gpaPtr = obj1.gpaPtr;
    }

    // getInfo print the constructor information
    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "gpa : " << *gpaPtr << endl;
    }
};

int main()
{
    // creating an objects
    Student obj("Amit Sarkar", 3.0);
    // call getInfo for obj
    obj.getInfo();

    // here copy obj data into obj1
    Student obj1(obj);
    // calling getInfo for obj1
    // obj1.getInfo();
    // changing value by dereferencing
    *(obj1.gpaPtr) = 3.2;
    obj.getInfo();

    return 0;
}