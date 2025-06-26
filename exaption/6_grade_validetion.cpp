#include <iostream>
using namespace std;
int main()
{
    int grade;

    try
    {
        cout << "Enter your grade (0-100): ";
        cin >> grade;

        if(grade < 0)
        {
            throw "Grade cannot be negative!";
        }
        if(grade > 100)
        {
            throw "Grade cannot exceed 100!";
        }

        cout << "Your grade is: " << grade << endl;

        if (grade >= 90)
        {
            cout << "Grade: A" << endl;
        }
        else if (grade >= 80)
        {
            cout << "Grade: B" << endl;
        }
        else if (grade >= 70)
        {
            cout << "Grade: C" << endl;
        }
        else if (grade >= 60)
        {
            cout << "Grade: D" << endl;
        }
        else 
        {
            cout << "Grade: F" << endl;
        }
    }
    catch(const char *error)
    {
        cout << "Exception" << error << endl;
    }
    return 0;
}