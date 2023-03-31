#include<stdio.h>
int main(){
    int f = 104;
    int c;float k;

    printf("Temperature in Fahrenheit= %d\n",f);

   c = (f-32)* 5/9;
   k = c + 273.15f; 
   printf("Temeprature in Celsius= %d\n",c);
   printf("Temeprature in Kelvin= %.2f\n",k);

   return 0;
}