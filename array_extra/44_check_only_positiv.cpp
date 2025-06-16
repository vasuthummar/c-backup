//Check if an array contains only positive numbers.
#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,1,1,1,1};
    bool flag=false;

    for(int i=0;i<5;i++)
    {
        if(arr[i]<0)
        {
            flag=false;
            break;
        }
    }
    if(flag==false)
        cout<<"all are not positiv"<<endl;
    else
        cout<<"all are positiv"<<endl;

    return 0;
}