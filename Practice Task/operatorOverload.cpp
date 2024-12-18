#include <iostream>
using namespace std;
class B
{
public:
    int x;
    int y;

public:
    int add()
    {
        return x + y;
    }

    void operator+(B &obj)
    {
        int value1 = this->x;
        int value2 = obj.x;
        cout << "output : " << value2 - value1 << endl;
    }
};
int main()
{
    B obj, obj1;
    obj.x = 7;
    obj1.y = 5;
    obj + obj1;
}