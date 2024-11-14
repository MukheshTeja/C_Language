#include <stdio.h>
//#include <conio.h>
int main()
{
    int arr1[100],*aptr,arr2[100],*bptr;
    aptr=&arr1;
    int i;
    printf("enter the number of elements in the array::-");
    scanf("%d",&i);
    printf("\t==========\n");
    printf("enter the elements in the array::-\n");
    for (int j=0;j<i;j++)
    {
        scanf("%d",(aptr+j));
    }
    printf("the values is the first array are::-\n");
    for (int j=0;j<=i;j++)
    {
        printf("%d|",*(aptr+j));
    }
    printf("\n");
    bptr=&arr2;
    for(int m=0;m<i;m++)
    {
        *(arr2+m) = *(arr1+m);//THE MAIN LOGIC TO CREATE THE COPY OF THE ARRAY!!
    }
    for (int j=0;j<=i;j++)
    {
        printf("%d|",*(bptr+j));
    }


}
