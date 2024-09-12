#include <stdio.h>
int main(){
    printf("Calculate the area of a triangle \n");
    float a;
    float b;
    float area;
    printf("Enter the length:");//To get the length of the traingle
    scanf("%f",&a);
    printf("Enter the breadth:");//To get the breadth of the traingle
    scanf("%f",&b);
    area = 0.5*(b*a);
    printf("Area of the triangle is %f",area);
    return 0;

}
