#include<stdio.h>
int main()
{
    int P,ch,B,M,C;
    scanf("%d%d%d%d%d",&P,&ch,&B,&M,&C);
    float per;
    per=(P+ch+B+M+C)/5.0;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
     else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else if(per<40)
    {
        printf("Grade F");
    }
    else
    {
        
    
    printf("fail");
    }
    
}
