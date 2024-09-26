#include <stdio.h>
int main()
{
    int num,count_negative,count_postive,count_zero;
    printf("enter the no of elements needed in array a::");
    scanf("%d",&num);
    int arr[num];
    for (int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    count_postive=0;
    count_negative=0;
    count_zero=0;
    for (int i =0;i<num;i++)
    {
        if ((arr[i])>0)
        {
            count_postive=count_postive+1;
        }
        if ((arr[i])<0)
        {
            count_negative=count_negative+1;
        }
        if ((arr[i])==0)
        {
            count_zero=count_zero+1;
        }

    }
    printf("the total number of postive numbers is::%d\n",count_postive);
    printf("the total number of negative numbers is::%d\n",count_negative);
    printf("the total number of zero numbers is::%d",count_zero);

    return 0;
}
