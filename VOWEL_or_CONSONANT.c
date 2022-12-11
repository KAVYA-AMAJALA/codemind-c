#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'o':
        case 'O':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'u':
        case 'U': 
        printf("VOWEL");
        break;
        default:
        printf("CONSONANT");
        
    }
    return 0;
}