#include <stdio.h>
int main(){
    char ch;
    int ascii_value;
    printf("Enter a letter to obtain its ASCII value::");
    scanf("%c",&ch);
    ascii_value = ch;
    printf("The ascii value of the letter is %d \n",ch);
    if (ascii_value>=97&&ascii_value<=122)
    {
        printf("the entered character is lower case letter");
    }
    else
    {
        printf("the entered character is NOT a lower case letter");
    }
    return 0; 
}
