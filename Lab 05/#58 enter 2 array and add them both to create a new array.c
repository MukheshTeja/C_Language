#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("enter the number of elements you want in the array::");
    scanf("%d",&num);
    int arr[num],arr_2[num];
    printf("enter the values for the first array::");
    for (int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the values for the second array::");
    for (int i=0;i<num;i++)
    {
        scanf("%d",&arr_2[i]);
    }
    printf("the sum of both the arrays is::");
    for (int i=0;i<num;i++)
    {
        printf("%d \t",arr[i]+arr_2[i]);
    }
    return 0;
}
