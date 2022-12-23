#include<stdio.h>
int main()
{
    int a,i,n;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(i=a;i<=n;i++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}