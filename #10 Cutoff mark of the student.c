#include <stdio.h>
int main()
{
    float Mat,Phy,Chem,Eng,Cutoff;
    printf("Calculate the cut off marks of a student using this tool \n");
    printf("Enter your marks in mathematics out off 200: ");
    scanf("%f",&Mat);
    printf("Enter your marks in Physics out off 200: ");
    scanf("%f",&Phy);
    printf("Enter your marks in Chemistry out off 200: ");
    scanf("%f",&Chem);
    printf("Enter your marks in English out off 200: ");
    scanf("%f",&Eng);
    printf("Enter your marks in Entrance exam marks out off 100: ");
    scanf("%f",&Cutoff);
    Cutoff = Mat/2+Phy/2+Chem/2+Eng;
    printf("The cut off mark  is :%f",Cutoff);
    return 0 ;
}


// =)
    
