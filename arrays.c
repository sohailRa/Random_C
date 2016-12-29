#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void add_two_matrix();

int main(){

	add_two_matrix();
	
	return 0;
}


void add_two_matrix(){

	int col, row, matrixA[10][10], matrixB[10][10], sum[10][10], i, j;

	printf("\nEnter the number of column and rows (b/w 1 and 10: ");
	scanf("%d %d", &col, &row);

	printf("Enter elements of matrix A:\n");
	for(i=0; i<row;i++)
		for(j=0; j<col; j++){
			printf("Enter element A[%d][%d]: ", i+1, j);
			scanf("%d" , &matrixA[i][j]);
		}

	printf("Enter elements of matrix B:\n");
	for(i=0; i<row;i++)
		for(j=0; j<col; j++){
			printf("Enter element B[%d][%d]: ", i+1, j);
			scanf("%d" , &matrixB[i][j]);
		}

	for(i=0; i<row;i++)
		for(j=0; j<col; j++)
			sum[i][j] = matrixA[i][j] + matrixB[i][j];


	printf("Sum of Matrix A and Matrix B is:\n\n");
	for(i=0; i<row;i++)
		for(j=0; j<col; j++){
			printf("%d ", sum[i][j]);
			if(j == col-1)
				printf("\n\n");
		}
}