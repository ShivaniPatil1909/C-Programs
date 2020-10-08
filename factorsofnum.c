#include<stdio.h>
int main(){
    int number;
    printf("Enter the number =");
    scanf("%d",&number);
    printf("\nthe Factios of %d are=",number);
    for(int i=0;i<=number;i++){

        if(number%i==0){
            printf("%d",i);
        }
    }
return 0;
}
