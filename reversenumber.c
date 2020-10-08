#include<stdio.h>
int main(){
    int a,temp=0,remainder;
    printf("ENter the number =");
    scanf("%d",&a);
    printf("\n Enter number before reverse = %d",a);
    if(a==0){
        printf("Invalid input give valid input NOT ZERO ");
            }

    while(a!=0){
         remainder=a%10;
        temp=temp*10 +remainder;
        a=a/10;
    }
    printf("\nreversed number is %d",temp);
return 0;}
