#include <stdio.h>
int main()
{
    int n,a;
    printf("enter the number of numbers you want in your series:");
    scanf("%d",&n);
    a=2;
    for (int i=0;i<n;i++)
    {
        printf(">>%d",a);
        a+=2;
    }
    
    
}
