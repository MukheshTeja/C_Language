#include <stdio.h>

int main()
{
    int num,n1,n2,n3,series;
    printf("Enter the number of how long you want the FIBONACCI series you want: ");
    scanf("%d",&num);
    n1 = 0;
    n2 = 1;
    n3 = n1+n2;
    printf("%d,%d,%d",n1,n2,n3);
    series = num-3;
    while (number!=0)
    {
        n_1 = n_2;
        n_2 = n_3;
        n_3 = n_1+n_2;
        printf(",%d",n_3);
        number-=1;
    }
    return 0;
}


