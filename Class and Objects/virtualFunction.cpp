#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout << "parent class\n";
    }

    virtual void hello()
    {
        cout << "Hello World..!\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "child class\n";
    }

    void hello()
    {
        cout << "Hello World From child\n";
    }
};

int main()
{
    Child c1;
    c1.hello();
    // c1.getInfo();
    // Parent p1;
    // p1.getInfo();
    return 0;
}