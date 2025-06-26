#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    try
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operation (+, -, *, /):";
        cin >> operation;
        cout << "Enter second number: ";
        cin >> num2;

        double result;

        if(operation == '+')
        {
            result = num1 + num2;
        }
        else if(operation == '-')
        {
            result = num1 - num2;
        }
        else if(operation == '*')
        {
            result = num1 * num2;
        }
        else if(operation == '/')
        {
            if(num2 == 0)
            {
                throw "Cannot divide by zero!";
            }
            result = num1 / num2;
        }
        else 
        {
            throw "Invalid operation!";
        }

        cout << "Result: " << result << endl;
    }
    catch(const char *error)
    {
        cout << "Error:" << error << endl;
    }
    return 0;
}
