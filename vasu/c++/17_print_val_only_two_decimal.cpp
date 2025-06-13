#include <iostream>
#include <iomanip>
using namespace std;                                 

int main()
{
    float fval=104.5232;
    cout << fixed;

    cout <<"value is " << setprecision(2) << fval;
    
    return 0;
}