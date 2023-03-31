#include <stdio.h>
int main(){
    int i,fact=1;
    printf("enter the num->");
    scanf("%d",&i);
    for(i; i>0; i--){
        fact=fact*i;
    }
    printf("Factorial = %d",fact);
    return 0;
}