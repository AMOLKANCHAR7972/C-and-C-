#include <stdio.h>

int main(){
    int a[10],i,j,num;
    
    printf("enter the number to convert:");
    scanf("%d",&num);

    for(i=0; num>0; i++){
        a[i]= num % 2;
        num = num/2;
    }

    printf("binary of number is = ");
    for(j=i-1; j>=0; j--){
        printf("%d",a[j]);
    }
    return 0;
}