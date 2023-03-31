#include <stdio.h>
int isPrime(int n);
int main(){
    int  i=2,j=0,count;

    printf("First 10 prime number are : ");
    while(j!=10){
            count = isPrime(i);
            if(count == 1) {
                j++;
                printf("%d ",i);
            }
                i++;  
    }
    return 0;
}

int isPrime(int n){
    int j, count = 1;
    for(j=2; j <= n/2; ++j){
        if (n%j == 0){
            count =0;
            break;
        }
    }
        return count;
}

    































































    

    

    
