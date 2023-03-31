#include <stdio.h>
int main(){
    int n,a[1000];
    int i,num,count=0;

    printf("size of array:");
    scanf("%d",&n);

    printf("array elements are =");
    for(i=0; i<n; i++){ 
        scanf("%d",&a[i]);
    }

     printf("enter the no:");
     scanf("%d",&num);

    for(i=0; i<n; i++){ 
        if(num==a[i]){
            count++;
        }      
    }
    printf("no of occurence= %d",count);
    return 0;
}