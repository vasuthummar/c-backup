#include <iostream>
using namespace std;

int main()
{
    int a=10, b=0;

    try
    {
        if(b == 0)
        {
            throw "Division by zero error!";
        }
        int result = a/b;
        cout << "result: " << result << endl;
    }
    catch (const char *msg)
    {
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues..." << endl;
    
    return 0;
}