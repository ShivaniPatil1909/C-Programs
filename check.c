#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);


    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf(" \n'%c' is alphabet.", ch);
    }
    if(ch >= 'A' && ch <= 'Z')
    {
        printf(" \n'%c' is uppercase alphabet.", ch);
        ch = ch + 32 ;
        printf("\n The Lower case letter is =%c",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf(" \n'%c' is lowercase alphabet.", ch);
        ch = ch - 32 ;
        printf("\n The Upper case alphabet is =%c",ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }
    

    return 0;
}