#include <stdio.h>
int main()
{
    int num,m,mul;
    printf("enter the number to get its table::");
    scanf("%d",&num);
    printf("enter the number to get the multiples until it::");
    scanf("%d",&m);
    for (int i=1;i<=m;i++)
    {
        mul=num*i;
        printf("\n %d",mul);
    }
    
}
