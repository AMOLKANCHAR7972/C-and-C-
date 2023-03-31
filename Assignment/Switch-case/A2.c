#include<stdio.h>
int main(){
    int x=10,y=2,z;
    char ch;
    int as;
    printf("enter the operator");
    scanf("%*c%c",&ch);
    as = ch;
    switch(as){
        case 42 :
            z=x*y;
            printf("value of z =%d",z);
            break;
        
        case 43 :
            z=x+y;
            printf("value of z =%d",z);
            break;

        case 45 :
            z=x-y;
            printf("value of z =%d",z);
            break;

        case 47 :
            z=x/y;
            printf("value of z =%d",z);
            break;


    }

    return 0;
}