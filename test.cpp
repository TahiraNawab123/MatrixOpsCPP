#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "MatrixOps.h"
#include <sstream>

using namespace std;

TEST_CASE("Testing inputMatrix and printMatrix") {
    int matrix[3][3];

    SECTION("Basic Test Cases") {
        // Manually input values as no I/O redirection is available
        matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3;
        matrix[1][0] = 4; matrix[1][1] = 5; matrix[1][2] = 6;
        matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9;

        // Test print function by capturing output
        stringstream buffer;
        streambuf* originalCout = cout.rdbuf(buffer.rdbuf());

        printMatrix(matrix);
        REQUIRE(buffer.str() == "Output:\n1 2 3 \n4 5 6 \n7 8 9 \n");

        cout.rdbuf(originalCout); // Restore original cout
    }
}

TEST_CASE("Testing findRowWithMaxOnes") {
    int matrix[5][5] = {
        {0, 0, 1, 0, 1},
        {1, 1, 1, 0, 0},
        {1, 0, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 1, 0, 1, 1}
    };

    SECTION("Basic Test Cases") {
        REQUIRE(findRowWithMaxOnes(matrix, 5, 5) == 2); // Row 2 has the most 1s
    }
}

TEST_CASE("Testing sumMatrixElements") {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    SECTION("Basic Test Cases") {
        REQUIRE(sumMatrixElements(matrix) == 45); // Sum of 1 to 9
    }
}

TEST_CASE("Testing transposeMatrix") {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::ostringstream buffer;
    std::streambuf *old = std::cout.rdbuf(buffer.rdbuf());

    transposeMatrix(matrix);
    std::cout.rdbuf(old);

    REQUIRE(buffer.str() == "Output:\n1 4 7 \n2 5 8 \n3 6 9 \n");
}

TEST_CASE("Testing swapRows") {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    SECTION("Basic Test Cases") {
        swapRows(matrix, 0, 2);
        REQUIRE(matrix[0][0] == 7);
        REQUIRE(matrix[2][0] == 1);
    }
}

TEST_CASE("Testing multiply2x2Matrices") {
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    SECTION("Basic Test Cases") {
        multiply2x2Matrices(mat1, mat2, result);
        REQUIRE(result[0][0] == 19); // 1*5 + 2*7
        REQUIRE(result[1][1] == 50); // 3*6 + 4*8
    }
}

TEST_CASE("Testing addMatrices") {
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int added[3][3];

    SECTION("Basic Test Cases") {
        addMatrices(matrix1, matrix2, added);
        REQUIRE(added[0][0] == 10);
        REQUIRE(added[2][2] == 10);
    }
}
