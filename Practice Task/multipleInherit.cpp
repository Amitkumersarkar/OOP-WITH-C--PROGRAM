// multiple inheritance

#include <iostream>
using namespace std;
class Human
{
public:
    string name;
    int age;

public:
    void display()
    {
        cout << "Name is : " << endl;
    }
};

class Male
{
public:
    string color;

public:
    void show()
    {
        cout << "color is : " << endl;
    }
};

// multiple inheritance

class Hybrid : public Human, public Male
{
};

int main()
{
    // create an objects
    Hybrid obj;

    // call the function

    obj.display();
    obj.show();
    return 0;
}