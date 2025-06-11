#include <stdio.h>
int main()
{
    int val1= 10,val2 = 20,val3 = 30;
    if(val1 > val2 && val1 > val3)
    
        printf("%d is biggest", val1);
    
    else if(val2 > val1 && val2 > val3)
    
        printf("%d is biggest", val2);
    
    else
        printf("%d is biggest",  val3);

        return 0;
}