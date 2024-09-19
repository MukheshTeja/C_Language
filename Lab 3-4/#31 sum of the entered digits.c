#include <stdio.h>
int main(){
    int num,sum,save,a;
    printf("Enter a number to calculate the sum of the digits: ");
    scanf("%d",&num);
    sum = 0;
    save = num;
    while(save!=0)
    {
        a=save%10;
        sum = sum+a;
        save=save/10;
    }
    printf("The sum of the digits in %d is %d",num,sum);
}
