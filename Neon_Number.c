#include<stdio.h>
int main()
{
    int n,square,rem,s=0;
    scanf("%d",&n);
    
     square=n*n;
    while(square!=0)
    {
    rem=square%10;
    s+=rem;
    square=square/10;
}
 if(s==n)
printf("Neon Number");
else
printf("Not Neon Number");
return 0;
}