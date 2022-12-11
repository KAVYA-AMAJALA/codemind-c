#include<stdio.h>
int main()
{
    int  i,on,n,ld,s;
    long fact;
    scanf("%d",&n);
    on=n;
    s=0;
    while(n>0)
    {
        ld=n%10;
        fact=1;
        for(i=1;i<=ld;i++)
        {
        fact =fact*i;        
    }
    s=s+fact;
    n=n/10;
    }

if(s==on)
{
    printf("The number %d is a strong number",on);
}
else
{
    printf("The number %d is not a strong number",on);
}
return 0;
}