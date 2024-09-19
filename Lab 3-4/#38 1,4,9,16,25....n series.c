#include <stdio.h>
int main()
{
    int num,squares,i;
    printf("Enter the last number to decide how long the series is::");
    scanf("%d",&num);
    for(i=1;num>=i;i++)
    {
        squares=i*i;
        printf("->%d",squares);
    }
    return 0;
}
