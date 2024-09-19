#include <stdio.h>

int main() {
    int num,fact,i;
    printf("Enter a number to check if it is a prime number: ");
    scanf("%d",&num);
    fact = 0;
    for (i=1;i<=num;++i){
        if (num%i==0){
            fact+=1;
        }
    }
        if (fact>2){
            printf("composite number");
        }else if (fact==2)
        {
            printf("prime number");
        }
    return 0;
}
