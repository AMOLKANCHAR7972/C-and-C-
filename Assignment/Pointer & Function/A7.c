#include <stdio.h>
int power (int x, int y);
int main(){
    int x, y;
    int res;

    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Enter it's power: ");
    scanf("%d",&y);
    res = power(x,y);
    printf("%d^%d is %d", x, y, res);
    return 0;
}

int power (int x, int y){
    if(y){
        return (x * power(x, y - 1));
    }
    return 1;
}