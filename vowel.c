#include<stdio.h>
int main(){
char ch;
    printf("Enter a character=");
    scanf("%c",&ch);

    if (ch=='a' || ch=='i' || ch=='o' || ch=='u' || ch=='e' || ch=='A' || ch=='E' || ch=='U' || ch=='O' || ch=='I' ){
        printf("This is %c vowel",ch);
    }else{
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            printf("This is %c CONSONENT",ch);
        }else{
            printf("This is not ALPHABET %c",ch);
        }

    }
    return 0;
}
