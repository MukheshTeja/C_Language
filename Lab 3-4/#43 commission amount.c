#include <stdio.h>
int main()
{
    float sales,com;
    printf("Enter the sales amount::-");
    scanf("%f",&sales);
    if (sales<=500)
    {
        com=0.05*sales;
        printf("the commission is::%f",com);
    }
    if (sales>500&&sales<=2000)
    {
        com=(0.1*sales)+35;
        printf("the commission is::%f",com);
    }
    if (sales>2000&&sales<=5000)
    {
        com=(0.12*sales)+185;
        printf("the commission is::%f",com);
    }
    if (sales>5000)
    {
        com=0.125*sales;
        printf("the commission is::%f",com);
    }
    return 0;
}
