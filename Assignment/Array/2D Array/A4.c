#include <stdio.h>
int main(){
//(i)
      int a[10][10],b[10][10],i,j,row,col,c=1;

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

      for(row = 0; row < i; row++){
            for(col = 0; col < j; col++){
                  if(a[row][col] != b[row][col]){
                        c = 0;
                   }
             }  
      }
      
      if(c == 1){
            printf("The Matrix is a Symmetric Matrix\n");
      }
      else{
            printf("The Matrix is Not a Symmetric Matrix\n");
      }
//(ii)
      //sum of diagonal elements
      int sum=0;
      for(row = 0; row < i; row++){
           sum = sum + b[row][row];      
      }
      printf("The sum of diagonal elements of a square matrix = %d\n",sum);

//(iii)
      //check if the matrix upper triangular matrix
      int up=1;
      for(row = 0; row < i; row++){
            for(col = 0; col < j; col++){
                  if(col < row && b[row][col] != 0){
                        up = 0;
                   }
             }  
      }
      
      if(up == 1){
            printf("The Matrix is a Upper Triangular Matrix");
      }
      else{
            printf("The Matrix is Not a Upper Triangular Matrix");
      }
      return 0;
}
