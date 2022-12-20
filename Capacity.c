#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int capacity;
    capacity=(2*s*t*b*512)/1024;
    printf("%d KB",capacity);
}