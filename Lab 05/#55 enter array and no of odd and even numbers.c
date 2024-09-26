#include <stdio.h>
int main()
{
    int num,count_odd,count_even;
    printf("enter the no of elements needed in array a::");
    scanf("%d",&num);
    int arr[num];
    for (int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    count_odd=0;
    count_even=0;
    for (int i=0;i<num;i++)
    {
        if ((arr[i]%2)!=0)
        {
            count_odd=count_odd+1;
        }
        if ((arr[i]%2)==0)
        {
            count_even=count_even+1;
        }
    }
    printf("the total number of even numbers is::%d\n",count_even);
    printf("the total number of odd numbers is::%d",count_odd);
    return 0;
}
