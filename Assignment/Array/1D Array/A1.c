#include <stdio.h>
int main(){
    int n,a[1000];
    int i,j,k;

    printf("size of array:");
    scanf("%d",&n);
    
    printf("array elements are =");
    for(i=0; i<n; i++){ 
        scanf("%d",&a[i]);
    }
    
    j = a[0];
    k = a[0];
    for(i=0; i<n; i++){
        if(a[i]>j){
            j = a[i];
        }
        else{
            if(a[i]<k){
            k = a[i];
        }
        }
    }
    printf("largest no = %d\n",j);
    printf("smallest no = %d\n",k);

    printf("range of elements %d(max) - %d(min) = %d",j,k,(j-k));
    return 0;

}