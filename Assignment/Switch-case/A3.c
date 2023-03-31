#include <stdio.h>
int main(){
    int x,y,z,n,temp;
    int choice;

    printf("Enter the two numbers->");
    scanf("%d%d",&x,&y);
    printf("x = %d,y = %d\n",x,y);
    
    printf("Enter the choice->");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            if(x==y){
                printf("'x' is equal to 'y'");
            }
            else{
                printf("'x' is not equal to 'y'");
            }
            break;
        
        case 2:
            if(x<y){
                printf("'x' is less than 'y'");
            }
            else{
                printf("'x' is not less than 'y'");
            }
            break;
        
        case 3:
            z = x / y;
            printf("Quotient=%d\n",z);
            z = x % y;
            printf("Remainder=%d",z);
            break;

        case 4:
            printf("enter the num->");
            scanf("%d",&n);
            if(n>x && n<y){
                printf("n is lies between x&y");
            }
            else if(n<x && n>y){
                printf("n is lies between x&y");
            }
            else{
                printf("n is not lies between x&y");
            }
            break;

        case 5:
            temp = x;
            x = y;
            y = temp;
            printf("x = %d,y = %d",x,y);
            break;


    }

    return 0;

}