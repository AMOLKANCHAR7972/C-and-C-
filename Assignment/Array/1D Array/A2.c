#include <stdio.h>
#include<stdlib.h>
int main(){
    int n,a[1000];
    int i,j;

    printf("size of array:");
    scanf("%d",&n);

    printf("array elements are =");
    for(i=0; i<n; i++){ 
        scanf("%d",&a[i]);
    }

    printf("enter the key:");
    scanf("%d",&j);

    for(i=0; i<n; i++){ 
        if(j==a[i]){
            printf("key is present");
            exit(0);
        }      
    }
        printf("key is not present");
        return 0;
}