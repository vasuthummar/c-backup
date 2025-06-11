#include <stdio.h>
int main()
{
    int val,note;
    printf("Enter a value=");
    scanf("%d", &val);

    if(val >= 500)
    {
        note=val/500;
        val=val-(note*500);
        printf("500rs. note number=%d\n",note);
    }
        
    if(val >= 200)
    {
        note=val/200;
        val=val-(note*200);
        printf("200rs. note number=%d\n",note);
    }

    if(val >= 100)
    { 
        note=val/100;
        val=val-(note*100);
        printf("100rs. note number=%d\n",note);    
    }
    
    if(val >= 50)
    {
        note=val/50;
        val=val-(note*50);
        printf("50rs. note number=%d\n",note);
    }
    
    if(val >= 20)
    {
        note=val/2;
        val=val-(note*20);
        printf("20rs. note number=%d\n",note);
    }

    if(val >= 10)
    {
        note=val/10;
        val=val-(note*10);
        printf("10rs. note number=%d\n",note);
    }

    if(val >= 5)
    {
        note=val/5;
        val=val-(note*5);
        printf("5rs. note number=%d\n",note);
    }

    if(val >= 2)
    {
        note=val/2;
        val=val-(note*2);
        printf("2rs. note number=%d\n",note);
    }

    if (val >= 1)
    {
        note=val/1;
        val=val-(note*1);
        printf("1rs. note number=%d\n",note);
    }
    
    return 0;
}