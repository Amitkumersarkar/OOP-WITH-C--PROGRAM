#include <iostream>
using namespace std;
class Area
{
public:
    virtual void calculate()
    {
        cout << "could not override" << endl;
    }
};

class Circle : public Area
{
protected:
    double radius = 5;

public:
    void calculate()
    {
        cout << "Area of circle : " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Area
{
protected:
    double length = 5;
    double width = 10;

public:
    void calculate()
    {
        cout << "area of rectangle : " << length * width << endl;
    }
};

class triangle : public Area
{
protected:
    double base = 10;
    double height = 20;

public:
    void calculate() override
    {
        cout << "area of triangle : " << 0.5 * base * height << endl;
    }
};

int main()
{
    Area *ptr;
    Circle c1;
    ptr = &c1;
    ptr->calculate();
    Rectangle r1;
    ptr = &r1;
    ptr->calculate();
    triangle t1;
    ptr = &t1;
    ptr->calculate();

    return 0;
}
