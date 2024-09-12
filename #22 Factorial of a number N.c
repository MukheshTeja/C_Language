#include <stdio.h>

int main() 
{
    int num;
    int len;
    int fact;
    int i;
    printf("Enter a number to calculate its factorial");
    scanf("%d",&num);
    fact = num;
    len = num;
    i = num;
    while(i!=0&&len!=1)
    {
        len-=1;
        fact*=len;
        i-=1;
    }
    printf("The factorial of %d is %d",num,fact);
    return 0;
}
    


    

