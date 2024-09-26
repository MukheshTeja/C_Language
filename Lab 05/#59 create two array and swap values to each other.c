#include <stdio.h>
int main()
{
    int num,sum=0,a;
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
    for (int i=0;i<num;i++)
    {
        a=arr[i];
        arr[i]=arr_2[i];
        arr_2[i]=a;
    }
    printf("the values of array 1 now are::\n");
    for (int i=0;i<num;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\nthe values of array 2 now are::\n");
    for (int i=0;i<num;i++)
    {
        printf("%d \t",arr_2[i]);
    }

    return 0;
}
