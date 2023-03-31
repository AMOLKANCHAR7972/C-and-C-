#include <stdio.h>
int fibo(int num);
int main(){
    int n;
    int fibonacci; // 0 1 1 2 3 5 8 13 21 34 55 89 144
    
    printf("Enter any number to find nth fiboacci term: ");
    scanf("%d",&n);
    
    fibonacci = fibo(n); 
    
    printf("%d fibonacci term is= %d", n, fibonacci);
    
    return 0;
}

int fibo(int n) {
    if(n == 1)      
        return 0;
    else if(n == 2) 
        return 1;
    else if(n > 2) 
        return fibo(n-1) + fibo(n-2); 
}