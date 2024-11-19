//WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING
#include <stdio.h>
int main()
{
    char arr[200];
    char *sptr;
    int num;
    int countwords;
    countwords=1;
    printf("enter the string to count the number of words::");
    gets(arr);
    puts(arr);
    sptr=arr;
    while (*sptr != '\0')
    {
        if (*sptr == ' ')
        {
            countwords++;
        }
        sptr++;

    }
    printf("the number of words is::%d",countwords);
    

}
