#include<stdio.h>
int main(){

float cm,m,km;
printf("Enter a Centimeter=\n");
scanf("%f",&cm);
m=cm/100.0;
km=cm/100000.0;
printf("meter=%.2f m\n",m);
printf("kilometer=%.2f km\n",km     );

return 0;
}
