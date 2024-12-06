#include <iostream>
#include <string>
using namespace std;
class Myname
{
public:
    string name;
    string dept;
    int id;

    // here we declared non parameterized constructor
    // constructor always declared in public
    Myname()
    {
        name = "Amit Sarkar";
        dept = "CSE";
        id = 283;

        cout << "Hello Everyone !, Let's Introduced Myself" << endl;
        cout << "My Name Is : " << name << endl;
        cout << "Dept. Of : " << dept << endl;
        cout << "ID : " << id << endl;
    }
};

int main()
{
    Myname obj;
    // obj.name = "Amit Sarkar";
    // obj.dept = "CSE";
    // obj.id = 283;
    return 0;
}