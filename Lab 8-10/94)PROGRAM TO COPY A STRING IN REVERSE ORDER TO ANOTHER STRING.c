//WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS.
#include <stdio.h>
int main()
{
    char arr[100],brr[100];
    char *strp,*strbp;
    int len;
    strp=arr;
    strbp=brr;
    printf("enter the string to be reversed and saved in secon array::");
    gets(arr);
    puts(arr);
    len=sizeof(arr);
    for (int i=0;i<len;i++)
    {
        *(strbp + i) = *(strp + (len-1));
    }
    printf("the reversed string is::");
    puts(brr);


}
//have to recheck the logic..
