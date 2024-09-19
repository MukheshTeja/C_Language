#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter the number to find out its factors::");
    scanf("%d",&num);
    for(i=1;num>=i;i++)
    {
        if (num%i==0)
        {
            printf("%d-",i);
        }
    }
    return 0;
}
