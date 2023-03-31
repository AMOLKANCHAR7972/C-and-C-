#include <stdio.h>
int main(){
    int a[10][10], i,j,row,col,sum;

    printf("Enter no of rows and colums : ");
    scanf("%d%d",&i,&j);

    printf("Enter array elements : ");
      for( row = 0 ; row < i ;  row++){
          for(col = 0 ; col < j ; col++){
                scanf("%d",&a[row][col]); 
          }
          
      }
      for( row = 0 ; row < i ;  row++){
          for(col = 0 ; col < j ; col++){
                printf("%d  ",a[row][col]); 
          }
          printf("\n"); 
      } 
       
    for( row = 0 ; row < i ;  row++){
          sum =0;
          for(col = 0 ; col < j ; col++){
                sum= sum + a[row][col]; 
          }
          printf("sum of elements of each row = %d\n",sum);
      }

    for( col = 0 ; col < j ;  col++){
          sum =0;
          for(row = 0 ; row < i ; row++){
                sum= sum + a[row][col]; 
          }
          printf("sum of elements of each col = %d\n",sum);
      }
     return 0;  
}