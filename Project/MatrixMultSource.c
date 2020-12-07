#include <stdio.h>
#include "MatrixMult.h"

//void print_matrix(int** matrix, int row, int col)
//{
//	int i, j;
//	printf("\n");
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++)
//			printf("%d ", matrix[i][j]);
//		printf("\n");
//	}
//}

int** multiplication(int **matrix_1, int row1, int col1, int **matrix_2, int row2, int col2)
{
	int i, j, k;
	int **resulting_matrix = (int**)calloc(row1, sizeof(int));
	for (i = 0; i < row1; i++)
		resulting_matrix[i] = (int*)calloc(col2, sizeof(int));

	for (i = 0; i < row1; i++)
		for (j = 0; j < col2; j++) {
			resulting_matrix[i][j] = 0;
			for (k = 0; k < col1; k++)
				resulting_matrix[i][j] += matrix_1[i][k] * matrix_2[k][j];
		}

	//вывод результата умножения
	for (i = 0; i < row1; i++) {
		for (j = 0; j < col2; j++)
			printf("%d ", resulting_matrix[i][j]);
		printf("\n");
	}

	return resulting_matrix;

	for (i = 0; i < row1; i++)
		free(resulting_matrix[i]);
	free(resulting_matrix);
}