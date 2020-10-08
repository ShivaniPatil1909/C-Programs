#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    int x;
    printf("\n Enter The Character :- ");
    scanf("%c", &c);
    x=(int)c;
    if(x>=65 && x<=90)
    {
        printf("\n It is an uppercase character");
        printf(" \n The lowercase is%c ", tolower(x));
    }
    else if(x>=97 && x<=122)
    {
         printf("\n It is an Lowercase character");
        printf(" \n The uppercase is%c ", toupper(x));
    }
    else if(x>=48 && x<=57)
    {
        printf("\n It is a Digit ");
    }
    else
    {
        printf("\n It is a special symbol ");
    }
    return 0;
}