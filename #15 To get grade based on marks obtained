#include <stdio.h>
int main(){
    float math,eng,comp,phy,chem,perc;
    printf("Enter the marks of math out of 100: ");
    scanf("%f",&math);
    printf("Enter the marks of english out of 100: ");
    scanf("%f",&eng);
    printf("Enter the marks of computer out of 100: ");
    scanf("%f",&comp);
    printf("Enter the marks of physics out of 100: ");
    scanf("%f",&phy);
    printf("Enter the marks of chemistry out of 100: ");
    scanf("%f",&chem);
    perc = ((math+eng+comp+phy+chem)/500)*100;
    if (90<perc)
    {
        printf("You have secured grade A \n");
    }
    else if (80<perc && perc<=90)
    {
        printf("You have secured grade B \n");
    }
    else if (70<perc && perc<=80)
    {
        printf("You have secured grade C \n");
    }
    else if (60<perc && perc<=70)
    {
        printf("You have secured grade D \n");
    }
    else if (perc<=60)
    {
        printf("You have secured grade F \n");
    }
    else if (perc<0||perc>100)
    {
        printf("Please enter the marks correctly");
    }
    printf("You have scored %f percentage",perc);
   
    return 0;
}
