#ifndef MATRIXOPS_H
#define MATRIXOPS_H

#include <iostream>

using namespace std;

void printMatrix(int matrix[3][3]);
int sumMatrixElements(int matrix[3][3]);
void transposeMatrix(int matrix[3][3]);
void swapRows(int matrix[3][3], int row1, int row2);
int findRowWithMaxOnes(int matrix[5][5], int rows, int cols) ;
void multiply2x2Matrices(int mat1[2][2], int mat2[2][2], int result[2][2]);
void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]);

#endif // MATRIXOPS_H