#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#include "MatrixMult.h"


int main()
{
	int row1, row2, col1, col2;
	int i, j;

	//ввод данных двух матриц
	printf("-First matrix-\n");
	printf("Enter the number of rows and columns. The numbers must meet the '0 < number <= 10' criteria.\n");
	scanf_s("%d %d", &row1, &col1);

	printf("\n-Second matrix-\n");
	printf("Enter the number of rows and columns. The numbers must meet the '0 < number <= 10' criteria \nand be equal to the number of columns (rows) or rows (columns) of the first matrix.\n");
	scanf_s("%d %d", &row2, &col2);

	//проверка на правильный ввод
	if (col1 != row2 || col2 != row1) {
		printf("\nError: the numbers of rows and columns of two matrixes aren't equal.\n");
		return 0;
	}
	if (row1 < 0 || col1 < 0 || row2 < 0 || col2 < 0) {
		printf("\nError: the number of rows or columns can't be a negative one or zero.\n");
		return 0;
	}
	if (row1 > 10 || col1 > 10 || row2 > 10 || col2 > 10) {
		printf("\nError: the number of rows or columns is too big to meet the '0 < number <= 10' criteria.\n");
		return 0;
	}

	//ввод элементов первой матрицы
	int **matrix_1 = (int**)calloc(row1, sizeof(int));
	for (i = 0; i < row1; i++)
		matrix_1[i] = (int*)calloc(col1, sizeof(int));

	printf("\nElements of the first matrix:");
	for (i = 0; i < row1; i++) {
		for (j = 0; j < col1; j++) {
			scanf_s("%d", &matrix_1[i][j]);
		}
	}

	проверка на условие элементов
	for (i = 0; i < row1; i++) {
		for (j = 0; j < col1; j++)
			if (matrix_1[i][j] <= 0) {
				printf("\nError: all elements must be greater than zero.");
				return 0;
			}
	}

	//отображение первой матрицы
	printf("\n");
		for (i = 0; i < row1; i++) {
			for (j = 0; j < col1; j++)
				printf("%d ", matrix_1[i][j]);
			printf("\n");
		}

	//ввод элементов второй матрицы
	int **matrix_2 = (int**)calloc(row2, sizeof(int));
	for (i = 0; i < row2; i++)
		matrix_2[i] = (int*)calloc(col2, sizeof(int));

	printf("\nElements of the second matrix:");
	for (i = 0; i < row2; i++) {
		for (j = 0; j < col2; j++) {
			scanf_s("%d", &matrix_2[i][j]);
		}
	}

	проверка на условие элементов
	for (i = 0; i < row2; i++) {
		for (j = 0; j < col2; j++)
			if (matrix_2[i][j] <= 0) {
				printf("\nError: all elements must be greater than zero.");
				return 0;
			}
	}

	//отображение второй матрицы
	printf("\n");
		for (i = 0; i < row2; i++) {
			for (j = 0; j < col2; j++)
				printf("%d ", matrix_2[i][j]);
			printf("\n");
		}

	//умножение матриц и отображение матрицы-результата
	printf("\n\n-The resulting matrix-\n");
	int**resulting_matrix = multiplication(matrix_1, row1, col1, matrix_2, row2, col2);

	//очищение памяти
	for (i = 0; i < row1; i++)
		free(matrix_1[i]);
	free(matrix_1);

	for (i = 0; i < row2; i++)
		free(matrix_2[i]);
	free(matrix_2);

	getchar();
	getchar();

	return 0;
}
