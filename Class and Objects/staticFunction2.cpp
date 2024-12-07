#include <iostream>
#include <string>
using namespace std;

class ABCD
{
public:
    ABCD()
    {
        cout << "constructor\n";
    }
    ~ABCD()
    {
        cout << "destructor\n";
    }
};

int main()
{
    if (true)
    {

        static ABCD obj;
    }
    cout << "End of main function\n";
    return 0;
}