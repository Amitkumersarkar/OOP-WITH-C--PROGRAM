// hierarchical inheritance

#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "inside the display" << endl;
    }
};

class B : public A
{
public:
    void display1()
    {
        cout << "inside the display1" << endl;
    }
};

class C : public A
{
public:
    void display2()
    {
        cout << "inside the display2" << endl;
    }
};

int main()
{
    A obj;
    obj.display();

    B obj1;
    obj.display();
    obj1.display1();

    C obj2;
    obj2.display2();
    obj.display();
    return 0;
}
