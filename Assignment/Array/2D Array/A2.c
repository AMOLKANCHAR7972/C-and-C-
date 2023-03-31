#include <stdio.h>
int main(){
      int a[10][10],b[10][10],i,j,row,col;

    printf("Enter no of rows and colums : ");
    scanf("%d%d",&i,&j);

    printf("Enter array elements : ");
    for( row = 0 ; row < i ;  row++) {
          for(col = 0 ; col < j ; col++)  {
                scanf("%d",&a[row][col]); 
          }      
      }
      printf("given matrix a:\n");
      for( row = 0 ; row < i ;  row++){
          for(col = 0 ; col < j ; col++){
                printf("%d  ",a[row][col]); 
          }
          printf("\n"); 
      }
          printf("\n");
    
      printf("transpose of matrix a to b:\n");
      for( col = 0 ; col < j ;  col++){
          for(row = 0 ; row < i ; row++){
                b[col][row] = a[row][col];
                printf("%d  ",b[col][row]);
          }
          printf("\n");
      }
      return 0;
}