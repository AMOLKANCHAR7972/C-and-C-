#include<stdio.h>
#define PI 3.142
int main(){   
    int radius;
    float area;
    float perimeter;
    printf("Enter the radius: ");
    scanf("%d",&radius);

 area = PI*radius*radius;
 perimeter= 2*PI*radius;

 printf("Area=%.2f\nPerimeter=%.2f ",area,perimeter);

 return 0;

}