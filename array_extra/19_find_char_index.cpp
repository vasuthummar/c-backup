//Search for a character in a character array and print its position.
#include <iostream>
using namespace std;

int main()
{
    char arr[10]={'a','b','c','d','e','f','g','h','i','j'};
    char val;
    int i=0;

    cout<<"Enter a charecter= ";
    cin>>val;

    for(i=0; i<10; i++)
    {
        if(val==arr[i])
            break;
    }
    cout <<"the positon is "<< i;

    return 0;
}