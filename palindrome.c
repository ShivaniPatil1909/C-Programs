#include<stdio.h>
int main(){
        int a,temp=0,remainder,n;
    printf("ENter the number =");
    scanf("%d",&a);
    printf("\n Enter number before reverse = %d",a);
n=a;
    if(a==0){
        printf("Invalid input give valid input NOT ZERO ");
            }

    while(a!=0){
         remainder=a%10;
        temp=temp*10 +remainder;
        a=a/10;
    }
     printf("\nreversed number is %d",temp);

    if(temp==n){
        printf("\nIts palindrom number %d",n);
    }else{
        printf("\nits not palindrom number %d",n);
    }
return 0;
}
