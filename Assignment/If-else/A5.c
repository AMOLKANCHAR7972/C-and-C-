#include<stdio.h>
int main(){
    int a1,a2,a3,sum;

    printf("Enter the angles->");
    scanf("%d%d%d",&a1,&a2,&a3);
    sum = a1 + a2 +a3;
    printf("sum= %d\n",sum);

    if(sum == 180){
        printf("valid triangle");
    }
    else{
        printf("nonvalid triangle");
    }

    return 0;
}