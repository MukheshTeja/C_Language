#include <stdio.h>

void vowel(char c);
int main() 
{
    char c;
    printf("Enter the character : ");
    scanf("%c",&c);
    vowel(c);
    
    return 0;
}
void vowel(char c)
{
    if(c == 'a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("not a vowel");
    }
}
