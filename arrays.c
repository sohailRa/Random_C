#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void add_two_matrix();
void multiply_two_matrix();

int main(){

	//add_two_matrix();
	multiply_two_matrix();
	
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


void multiply_two_matrix(){

	  int a[10][10], b[10][10], c[10][10], i, j, k;
   int sum = 0;
 
   printf("\nEnter First Matrix : n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &a[i][j]);
      }
   }
 
   printf("\nEnter Second Matrix:n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &b[i][j]);
      }
   }
 
   printf("The First Matrix is: \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", a[i][j]);
      }
      printf("\n");
   }
 
   printf("The Second Matrix is : \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", b[i][j]);
      }
      printf("\n");
   }
 
   //Multiplication Logic
   for (i = 0; i <= 2; i++) {
      for (j = 0; j <= 2; j++) {
         sum = 0;
         for (k = 0; k <= 2; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }
 
   printf("\nMultiplication Of Two Matrices : \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", c[i][j]);
      }
      printf("\n");
   }
}