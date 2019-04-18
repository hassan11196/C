#include <stdio.h>
#include <stdlib.h>

int** Input_Matrix(int *rows, int *columns) {
	printf("Input the number of rows: ");
	scanf("%d", rows);
	printf("Input the number of columns: ");
	scanf("%d", columns);

	int **arr = (int **)malloc(*rows * sizeof(int *));
	int i, j;
	for (i = 0; i < *rows; i++)
		*(arr+i) = (int *)malloc(*columns * sizeof(int));

	for (i = 0; i < *rows; i++)
		for (j = 0; j < *columns; j++)
			scanf("%d", &arr[i][j]);
	return arr;
}

int** Transpose_Matrix(int **arr, int rows, int columns) {
	int i, j;
	int **transposeMatrix = (int **)malloc(columns * sizeof(int *));
	for (i = 0; i < columns; i++)
		transposeMatrix[i] = (int *)malloc(rows * sizeof(int));

	for (i = 0; i < columns; i++)
		for (j = 0; j < rows; j++)
			transposeMatrix[i][j] = arr[j][i];

	return transposeMatrix;

}

void Display_Transpose(int **transposeMatrix, int rows, int columns) {
	int i, j;
	for (i = 0; i < columns; i++) {
		for (j = 0; j < rows; j++) {
			printf("%d\t", transposeMatrix[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	int rows, columns;
	int **arr = Input_Matrix(&rows, &columns);
	int **transposeMatrix = Transpose_Matrix(arr, rows, columns);
	Display_Transpose(transposeMatrix, rows, columns);
	free(arr);
	free(transposeMatrix);
	return 0;
}
