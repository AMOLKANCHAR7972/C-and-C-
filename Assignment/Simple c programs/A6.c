#include<stdio.h>
#define PI 3.14
int main(){

int radius = 5;
int height = 10;
float surface_area,volume;

surface_area = 2*PI*radius*(height+radius);
volume = 2*PI*radius*height;

printf("Surface Area of Cylinder= %.2f\n",surface_area);
printf("Volume of Cylinder = %.2f",volume);

return 0;

}