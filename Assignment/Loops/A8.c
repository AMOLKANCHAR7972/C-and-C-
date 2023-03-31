#include<stdio.h>
int main(){
    int i,j,num,count;
    printf("enter the num->");
    scanf("%d",&num);
    printf("1 to %d prime numbers are: ",num);

    for(i=1; i<=num; i++){
        count =0;
        for(j=1; j<=num; j++){
            if(i%j ==0)
                count++;
        }
        if(count == 2)
            printf("%d ",i);
    }
    return 0;
}