
#include <iostream>
#include"MatrixOps.h"
using namespace std;


void printMatrix(int matrix[3][3]) {
    cout << "Output:\n";
     for (int i = 0; i <3; i++) {
         for (int j = 0; j <3; j++) {
            cout << matrix[i][j] << " ";
          }
         cout<<endl;
     }
}


int findRowWithMaxOnes(int matrix[5][5], int rows, int cols) { 
    int maxcount = -1, maxrow = -1; 
    for (int i = 0; i < rows; i++) {
        int count = 0;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 1) {
                count++;
            }
        }
        if (count > maxcount) {
            maxcount = count;
            maxrow = i;
        }
    }
    return maxrow;
}


int sumMatrixElements(int matrix[3][3]) {
    int sum=0;
    for (int i = 0; i <3; i++) {
        for (int j = 0; j <3; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

void transposeMatrix(int matrix[3][3]) {
     int temp[3][3];
    // for (int i = 0; i <3; i++) {
    //     for (int j = 0; j <3; j++) {
    //         cout << matrix[i][j] << " ";

    //     }cout<<endl;
    // }
        cout<<"Output:"<<endl;
        for (int i = 0; i <3; i++) {
            for (int j = 0; j <3; j++) {
                temp[i][j] = matrix[j][i];
                cout<<temp[i][j]<<" ";
            }cout<<endl;
        }
}

void swapRows(int matrix[3][3], int row1, int row2) {
    for(int i =0; i< 3; i++) {

            int temp = matrix[0][i];
            matrix[0][i] = matrix[2][i];
            matrix[2][i] = temp;

    }

    for(int t=0; t<row1; t++) {
        for(int j =0; j<row2; j++) {
            cout<<matrix[t][j]<<" ";
        }cout<<endl;
    }
}

void multiply2x2Matrices(int mat1[2][2], int mat2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0; 
            for (int k = 0; k < 2; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl; 
    }
}

