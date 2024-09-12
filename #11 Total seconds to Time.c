#include <stdio.h>
int main()
{
    int t_sec,hour,min,sec;
    int rem_sec;
    int format;
    printf("A tool which will convert total seconds into time \n");
    printf("Enter the seconds:: ");
    scanf("%d",&t_sec);
    hour = t_sec/(60*60);
    rem_sec = t_sec%(60*60);
    min = rem_sec/60;
    sec = rem_sec%60;
    printf("The time is %d:%d:%d ",hour,min,sec);
    return 0;
}

