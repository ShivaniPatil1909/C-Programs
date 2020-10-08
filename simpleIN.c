#include<stdio.h>
int main(){
float pr,time,rate,si;

printf("\nEnter the principle amount=");
scanf("%f",&pr);


printf("\nEnter the TIme=");
scanf("%f",&time);

printf("\nEnter the Rate=");
scanf("%f",&rate);

si=(pr * time * rate)/100;

printf("\nSimple interest=%.2f",si);


return 0;
}
