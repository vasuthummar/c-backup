#include <stdio.h>
int main()
{
    float basic_salary,gs,hra,da;
    printf("Enter your basic selery=");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000) 
    {
        hra =basic_salary * 0.20f;
        da = basic_salary * 0.80f;
    }
    else if (basic_salary <= 20000)
    { 
        hra = basic_salary * 0.25f;
        da = basic_salary * 0.90f;
    }
    else
    {
        hra = basic_salary * 0.30f;
        da = basic_salary * 0.95f;
    }
        gs=basic_salary+hra+da;
        printf("Your gross selery is %f", gs);
    
        return 0;
}