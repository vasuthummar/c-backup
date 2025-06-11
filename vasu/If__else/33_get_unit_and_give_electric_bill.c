#include <stdio.h>
int main()
{
    float  unit,ch,src;
    printf("Enter unit=");
    scanf("%f", &unit);

    if(unit <= 50)
        {   
         ch=unit*0.5;
        }
    else if(unit <= 150)
        {
            ch=25+(unit-50)*0.75;
        }
    else if(unit <= 250)
        {
            ch=25+75+(unit-250)*0.1;
        }
    else
        {
            ch=25+75+100+(unit-250)*1.2;
        }

    src=ch*0.2;
    printf("Your electric bill=%f", src+ch);
    return 0;
}
