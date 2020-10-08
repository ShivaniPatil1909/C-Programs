#include<stdio.h>
int main(){
    char c;
    printf("Enter a character=");
    scanf("%c",&c);


    if((c>='a' && c<='z') ||  (c>='A' && c<='Z'))
    {
        printf("this character ' %c ' is ALPHABET ",c);
    }else{
        printf("this is %c is NOT ALPHABET",c);
    }
    return 0;
}
