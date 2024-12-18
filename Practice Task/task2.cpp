#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int id;

private:
    string dept;

    void display()
    {
        cout << "Department : " << dept << endl;
    }
};

int main()
{

    Student s1;
    s1.name = "Amit";
    s1.id = 283;
    cout << "Name : " << s1.name << endl;
    cout << "ID : " << s1.id << endl;

    return 0;
}