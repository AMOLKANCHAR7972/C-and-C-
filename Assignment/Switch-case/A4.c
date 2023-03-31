#include <stdio.h>
#define PI 3.14
int main(){
    int radius;
    float area,circumference,volume;
    int choice;

    printf("Enter the radius");
    scanf("%d",&radius);

    printf("Enter the choice->");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            area = PI*radius*radius;
            printf("Area of Circle=%.2f",area); 
            break;

        case 2:
            circumference = 2*PI*radius;
            printf("Circumference of Circle=%.2f",circumference); 
            break;
        
        case 3:
            volume = (4.0f/3.0f)*PI*radius*radius*radius;
            printf("Volume of Sphere=%.2f",volume); 
            break;
    }
    
    return 0;
}