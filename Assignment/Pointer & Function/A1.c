#include <stdio.h>
int main(){
    int a[100];
    int i,n,sum1=0,sum2=0;
    printf("size of array:");
    scanf("%d",&n);

    int *ptr = a;
    
    printf("array elements are =");
    for(i=0; i<n; i++){ 
        scanf("%d",&ptr[i]);
    }
    
    for(i=0; i<n; i++){
        if(ptr[i]%2 == 0){
            sum1=sum1 + ptr[i];
        }
    }
    printf("sum of even no is= %d\n",sum1);

    for(i=0; i<n; i++){
        if(ptr[i]%2 == 1){
            sum2=sum2 + ptr[i];
        }
    }
    printf("sum of odd no is= %d",sum2);
}