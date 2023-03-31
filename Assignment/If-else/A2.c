#include<stdio.h>
int main(){
    int num;
    printf("Enter the num->");
    scanf("%d",&num);

    if(num/5 && num/7){
        printf("Number is divisible by 5 & 7");
    }
    else{
        printf("Number is not divisible");
    }

    return 0;
}