#include <stdio.h>
int main()
{
    int num,a,j,i;
    printf("enter the number of elements in the array::");
    scanf("%d",&num);
    int arr[num];
    printf("enter the elements into the array::");
    for (int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<num;i++)
    {
        printf("%d \t ",arr[i]);
    }
    printf("\nthe reversed one is::\n");
    for (int j=(num-1);j>0;j--)
    {
        printf("%d \t",arr[j]);
    }
    printf("%d",arr[0]);

return 0;


}
