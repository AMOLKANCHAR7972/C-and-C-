#include <stdio.h>
int isEven(int x);
int main(){
    int n,x,res;
    printf("enter the no: ");
    scanf("%d",&n);

    res = isEven(n);
    printf("res= %d",res);
    return 0;
}

int isEven(int x){
    if(x%2==0){
        printf("the no is even\n");
        return 1;
    }
    else{
        printf("the no is odd\n");
        return 0;
    }
}