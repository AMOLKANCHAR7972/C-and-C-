#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main(){
    int l,b,r,choice;
    float area;
    
    while(1){
        printf("Menu: \n");
        printf("1.Compute Area of Circle\n2.Compute Area of Rectangle\n3.Compute Area of Triangle\n4.Exit\n");

        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter the radius:");
                scanf("%d",&r);
                area = PI*r*r;
                printf("Area of Circle= %.2f\n",area);
                break;

            case 2:
                printf("enter the length and braedth:");
                scanf("%d%d",&l,&b);
                area = l * b; 
                printf("Area of Rectangle= %.2f\n",area);
                break;
            
            case 3:
                printf("enter the height and base:");
                scanf("%d%d",&l,&b);
                area= (1.0/2.0)*b*l;
                printf("Area of Triangle= %.2f\n",area);
                break;
            case 4:
                exit(0);
        }
    }

    return 0;
}