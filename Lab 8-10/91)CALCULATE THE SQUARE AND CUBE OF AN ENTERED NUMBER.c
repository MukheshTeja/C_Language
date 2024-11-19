//WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
#include <stdio.h>
int main()
{
    int a,*aptr;
    int square,cube;
    printf("enter the value for a::");
    scanf("%d",&a);
    aptr=&a;//important to mention
    square=*aptr * *aptr;
    printf("the square of the entered number is::%d\n",square);
    cube=*aptr * *aptr * *aptr;
    printf("the cube of the entered number is::%d",cube);
    


}
