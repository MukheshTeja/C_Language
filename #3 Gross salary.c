#include <stdio.h>
int main()
{
    int gross_salary,basic_salary,HRM,allowance;
    printf("enter the basic salary-");
    scanf("%d",&basic_salary);
    printf("enter the HRM-");
    scanf("%d",&HRM);
    printf("enter the allowance-");
    scanf("%d",&allowance);
    gross_salary=basic_salary+HRM+allowance;
    printf("the gross salary is: %d \n",gross_salary);
    return 0;
}
