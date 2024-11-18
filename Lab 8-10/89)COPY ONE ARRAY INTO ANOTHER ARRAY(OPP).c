#include <stdio.h>
int main()
{
    int arr[100],brr[100],*aptr,*bptr,num;
    aptr=arr;
    bptr=brr;
    printf("enter the number of the elements needed to be entered::");
    scanf("%d",&num);
    printf("enter the values into the array::\n");
    for (int i=0;i<num;i++)
    {
        scanf("%d",(aptr+i));
    }
    for (int i=0;i<num;i++)
    {
        printf("%d",*(aptr+i));
    }
    for (int m=0;m<num;m++)
    {
        *(bptr + (num - 1 - m)) = *(aptr + m);//THE MOST IMP LOGIC FOR THE REVERSAL COPY TO TAKE PLACE

    }
    printf("\n==========================================\n");
    for (int i=0;i<num;i++)
    {
        printf("%d",*(bptr+i));
    }



}
