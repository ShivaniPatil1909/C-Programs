#include<stdio.h>
int main(){
float c,f;
printf("ENter a temprature in Farenhiet =\n");
scanf("%f",&f);
c=(f - 32 )* 5/9;
printf("%.2f Farenhiet = %.2f celsius ",f,c);

return 0;
}

