#include <iostream>
#include <string>
using namespace std;
// abstract class
class Shape
{
    // pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing a circle\n";
    }
};

int main()
{
    Circle c1;
    c1.draw();
    return 0;
}