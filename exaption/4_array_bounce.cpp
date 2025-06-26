#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int index;
    
    try
    {
        cout << "Enter array index (0-4): ";
        cin >> index;

        if(index < 0 || index >= 5)
        {
            throw "Array index out of bounds!";
        }

        cout << "arr[" << index << "] = " << arr[index] << endl;
    }
    catch (const char *error)
    {
        cout << "Exception: " << error << endl;
    }

    return 0;
}