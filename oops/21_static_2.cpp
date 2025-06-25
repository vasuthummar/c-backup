#include <iostream>
using namespace std;

class Counter 
{
    public :
        static int count;

        static void increment()
        {
            count += 1;
        }
};

int Counter::count = 0;

int main()
{
    Counter::increment();
    cout << Counter::count << endl;

    Counter::increment();
    cout << Counter::count << endl;

    return 0;
}