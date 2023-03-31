#include <stdio.h>
int main(){
    int x,n;
    int power,i=1;
    printf("Enter the values of x & n->");
    scanf("%d%d",&x,&n);
    power = x;
    while(n!=i){
        power = power * x;
        i++;
    }
    printf("%d raised to %d= %d",x,n,power);
    return 0;
}

