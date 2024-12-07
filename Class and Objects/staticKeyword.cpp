#include <iostream>
#include <string>
using namespace std;

void fun()
{
    static int x = 0; // initialization statement -1 run
    cout << "x : " << x << endl;
    x++;
};

int main()
{
    fun();
    fun();
    fun();

    return 0;
}