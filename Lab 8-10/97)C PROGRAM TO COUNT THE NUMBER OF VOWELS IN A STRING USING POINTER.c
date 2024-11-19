//WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.
#include <stdio.h>
int main()
{
    int num,len;
    char *strp;
    int vowelcount;
    vowelcount=0;
    printf("enter the length needed to contain the string entered by user::");
    scanf("%d",&num);
    char arr[num];
    gets(arr);
    puts(arr);
    len=sizeof(arr);
    strp=arr;
    for (int i =0;i<len;i++)
    {
        switch (*(strp)) {
        case 'a': 
        case 'A':
        case 'e': 
        case 'E':
        case 'i': 
        case 'I':
        case 'o': 
        case 'O':
        case 'u': 
        case 'U':
            vowelcount++;
        break;
    default:
        break; // Do nothing for non-vowel characters
    }
    strp++;

    }
    printf("the number of vowels in the string is::%d",vowelcount);


}
//recheck the logic..
