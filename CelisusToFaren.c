#include<stdio.h>
int main(){
float c,f;
printf("ENter a temprature in celsius =\n");
scanf("%f",&c);
f=(c * 9/5)+32;
printf("%.2f celsius = %.2f Farenheit ",c,f);

return 0;
}
