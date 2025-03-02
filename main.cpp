#include<iostream>
#include"MatrixOps.h"

using namespace std;

int main(){

    cout << "-------------------------------" <<endl;
    int matrix[3][3];

    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << "Input: Element- [" << i<< "],[" << j << "]:";
            cin >> matrix[i][j];
        }
    }
    printMatrix(matrix);


    cout << endl;
    cout << "-------------------------------" << endl;
    int matrix2[5][5];

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cout << "Input: Element- [" << i << "],[" << j << "]:";
            cin >> matrix2[i][j];
        }
    }
    cout << findRowWithMaxOnes(matrix2,5,5);



    cout << endl;
    cout << "-------------------------------" << endl;
    int matrix3[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << "Input: Element- [" << i << "],[" << j << "]:";
            cin>>  matrix3[i][j];
        }

    }
    cout << "Output: sum of all the elements in the matrix is: " << endl;
    cout << sumMatrixElements(matrix3);


    cout << endl;
    cout << "--------------------------------" << endl;
    int matrix4[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0; j<3; j++) {
            cout << "Input: Element- [" << i << "],[" << j << "]:";
            cin >> matrix4[i][j];
        }
    }
    transposeMatrix(matrix4);


    cout << endl;
    cout << "--------------------------------" << endl;
    int  mat[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << "Input: Element- [" << i << "],[" << j << "]:";
            cin >> mat[i][j];
        }
    }cout << endl;
    swapRows(mat,3,3);


    cout << endl;
    cout << "--------------------------------" << endl;
    
    int mat1[2][2], mat2[2][2], result[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Input: Element- [" << i << "],[" << j << "]: ";
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Input: Element- [" << i << "],[" << j << "]: ";
            cin >> mat2[i][j];
        }
    }cout << endl;
    multiply2x2Matrices(mat1, mat2, result);


    cout << endl;
    cout << "----------------------------" << endl;
    int matrix6[3][3];

    for(int i=0; i<3 ; i++) {
        for(int j=0; j<3; j++) {
            cout << "Input: Element- [" << i << "],[" << j << "]:";
            cin >> matrix6[i][j];
        }
    }cout << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << "Input: Element- [" << i << "],[" << j << "]:";
            cin >> matrix6[i][j];
        }
    }cout << endl;
    addMatrices( matrix6, matrix6, matrix6);


    return 0;
}