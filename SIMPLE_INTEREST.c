#include<stdio.h>
int main()
{
    float p,r;
    float t;
    scanf(" %f %f %f ",&p,&r,&t);
    int si=(p * r *t) /100;
    printf( "%.d", si );
}