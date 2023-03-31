#include<stdio.h>
int main(){
    //(i)
    int a=5,b=9;
    int temp;
    temp = a;
    a = b ;
    b = temp;

    printf("a=%d,b=%d\n",a,b);

    //(ii)
    int c=4,d=8;
    c = c+d; //8+4=12
    d = c-d; //12-8=4
    c = c-d; //12-4=8

    printf("c=%d,d=%d",c,d);

    return 0;




}