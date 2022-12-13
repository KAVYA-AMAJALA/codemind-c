#include<stdio.h>
#include<math.h>
int main()
{
int P,R,T;
float ci;
scanf("%d%d%d",&P,&R,&T);
  ci=P*(pow((1+(R/100.0)),T)-1);
    printf("%.2f",ci);
    return 0;
}