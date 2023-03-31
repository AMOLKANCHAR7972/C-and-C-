#include <stdio.h>
int main(){
    int n,a[1000];
    int i,j,temp;

    printf("size of array:");
    scanf("%d",&n);

    printf("array elements are =");
    for(i=0; i<n; i++){ 
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("array in descending order = ");
    for(i=0; i<n; i++){ 
        printf("%d ",a[i]);
    }
    return 0;
}