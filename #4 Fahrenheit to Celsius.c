#include <stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("enter the temp in fahrenheit-");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9 ;
    printf("the conversion from fahrenheit to celsius is %f \n",celsius);
    return 0;
}
