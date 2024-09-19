#include <stdio.h>
int main() 
{
    int num,temp,save,rev_num;
    printf("enter the number : ");
    scanf("%d",&num);
    temp = number;
    while (number!=0)
    {
        save=num%10;
        rev_num=rev_num*10+save;
        num=num/10;
    }
    printf("The reverse of  is %d",rev_num);
    return 0;
}



    
