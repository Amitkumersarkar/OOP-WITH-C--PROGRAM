// inheritance in c++
#include <iostream>
using namespace std;

// declared an parent class

class Human
{
public:
    int height;
    int weight;
    int age;

    // declared an method

public:
    // here we used getter setter method
    int getAge()
    {
        return this->age;
    }
    void setWight(int w)
    {
        this->weight = w;
    }
};

/* here we create an child class
 to inherit parent
class data to access all info by public mode*/

class Male : public Human
{
public:
    // properties of Classes

    string name;

    // declared an method to print out info

    void display()
    {
        cout << "Name : " << name << endl;
    }
};

int main()
{
    // create an object an print all the info
    Male obj;
    // cout << obj.name << endl;
    obj.age = 24;
    cout << obj.age << endl;
    // obj.height = 5.7;
    // obj.cout << obj.height << endl;
    // cout << obj.weight << endl;
    // call the function
    obj.setWight(55);
    cout << obj.weight << endl;
    obj.display();

    return 0;
}