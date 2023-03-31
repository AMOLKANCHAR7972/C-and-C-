#include <stdio.h>
int main(){
    int n;
    int sum =0;
    printf("Enter the num->");
    scanf("%d",&n);

    while(n>0){
        sum = sum+n;
        printf("Enter the next num->");
        scanf("%d",&n);     
    }
    printf("sum= %d",sum);
    return 0;
}