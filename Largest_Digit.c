#include<stdio.h>
int main()
{
    int n,large=0,rem=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(rem>large)
        {
            large=rem;
        }
        n=n/10;
    }
    printf("%d",large);
    
}