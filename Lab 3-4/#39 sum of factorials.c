#include <stdio.h>
int main(){
   float total,fact,num;
   int i,j;
   fact = 1;
   printf("Enter how long you want the series to be: ");
   scanf("%f",&num);
   total = 0;
   for (i = 1;i<=num;++i){
       for (j = 1;j<=i;++j){
           fact*=j;
       }
    total+=i/fact;
    fact = 1;
   }
   printf("The total sum of the entire series is %f",total);
    
}
    
