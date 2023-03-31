#include<Stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10]={0},d[10][10]={0};
    int i,j,k,r1,c1,r2,c2;
	printf("Enter no. of rows and columns in matrix A: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter no. of rows and columns in matrix B: ");
	scanf("%d%d",&r2,&c2);

    if(r1!=r2 || c1!=c2){
		printf("Addition of Matrix  is not possible");
	}
	else if(c1!=r1){
		printf("Multiplication of Matrix is not possible");
	}
    else{
		printf("Enter elements of matrix A: ");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				scanf("%d",&a[i][j]);
            }
        }
		printf("Enter elements of matrix B: ");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
            }
        }
		//Matrix Addition
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				c[i][j] = a[i][j] + b[i][j];
            }
        }
		printf("\nResult of Matirx Addition:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("%d ", c[i][j]);
            }
			    printf("\n");
		}
		//Matrix Multiplication
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(k=0;k<r2;k++){
					d[i][j] += a[i][k]*b[k][j];
                }
            }
        }
		printf("\nResult of Matirx Multiplication:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf("%d ", d[i][j]);
            }
			    printf("\n");
		}
	}
	return 0;
}