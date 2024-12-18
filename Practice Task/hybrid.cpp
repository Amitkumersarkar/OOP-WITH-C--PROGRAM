// hybrid inheritance

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

class B
{
public:
    void display1()
    {
        cout << "inside the display1" << endl;
    }
};

class C : public A, public B
{
public:
    void display2()
    {
        cout << "inside the display2" << endl;
    }
};

int main()
{
    C obj;

    // function call using scope resolution operator
    obj.A::display();
    obj.B::display1();
    obj.C::display2();

    return 0;
}
