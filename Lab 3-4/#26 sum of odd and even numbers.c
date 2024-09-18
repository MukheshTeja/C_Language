#include <stdio.h>
int main()
{
    int num,even_sum,odd_sum;
    printf("enter the last digit to print the sum of even and odd digits till there::");
    scanf("%d",&num);
    even_sum=0;
    odd_sum=0;
    for (int i=0;i<=num;i++)
    {
        if (i%2==0)
        {
            even_sum=even_sum+i;
        }
        if (i%2!=0)
        {
            odd_sum=odd_sum+i;
        }
    }
    printf("the sum of all even numbers is::%d\n",even_sum);
    printf("the sum of all odd numbers is::%d",odd_sum);

    
}
