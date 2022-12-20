#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=a;
    printf("%d
",a);
    printf("%d
",c);
}