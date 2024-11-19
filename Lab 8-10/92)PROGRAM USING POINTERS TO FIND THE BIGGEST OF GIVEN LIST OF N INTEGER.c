//WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
#include <stdio.h>
int main()
{
    int num;
    int bignum;
    printf("enter the number of elements needed in the list::");
    scanf("%d",&num);
    int arr[num];
    int *aptr;
    aptr=arr;
    for (int i =0;i<num;i++)
    {
        printf("enter the value for the  element::");
        scanf("%d",(aptr + i));
        if (bignum<arr[i])
        {
            bignum=arr[i];
        }

    }
    bignum=arr[0];
    for (int i=0;i<num;i++)
    {
        if (bignum<arr[i])
        {
            bignum=arr[i];
        }
    }
    for (int i =0;i<num;i++)
    {
        //printf("enter the value for the %d th element::%d",i);
        //scanf("%d",(aptr + i));
        printf("%d",*(aptr+i));
    }
    printf("\nthe biggest number in the array is::%d",bignum);

    
}
