#include <stdio.h>

int main() 
{
    int t;
    printf("Enter number b/w 0 and 15\n");
    do{
    printf("Enter the number of test cases: ");
    scanf("%d",&t);
    }while(t>15 || t<0);
    int N[t];
    printf("Enter the values\n");
    for(int i = 0;i<t;i++)
    {
        printf("case%d : ",i + 1);
        scanf("%d",&N[i]);
    }
    
    for(int j=0;j<t;j++)
    {
         int pos = 0;
        for(int k = N[j];k>0;k/=10)       
            {
            int a = k % 10;
            if(a != 0 && N[j] % a == 0)
            {
                pos++;
            }
        }
        printf("no.of positions in case%d = %d\n",j+1,pos);
    }
    
    return 0;
}
