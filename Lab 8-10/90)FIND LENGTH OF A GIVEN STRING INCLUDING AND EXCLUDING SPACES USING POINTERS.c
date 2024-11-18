#include <stdio.h>

int main()
{
    char str[100];
    char *sptr;
    int chartotalcount=0;
    int countofspace=0;
    int sum;
    printf("enter the string ::");
    fgets(str, sizeof(str), stdin);
    sptr=str;
    while(*sptr != '\0')
    {
        chartotalcount++;
        if(*sptr==' ')
        {
            countofspace++;
        }
        sptr++;//WITHOUT THIS NOTHING WORKS
    }
    printf("the length of the string is::%d\n",chartotalcount);
    sum=chartotalcount - countofspace;
    printf("the length of the string exculding the spaces is::%d",sum);
}
