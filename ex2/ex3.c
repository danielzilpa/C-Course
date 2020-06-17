//The program was developed on Cloud9

#include <stdio.h>

#define COLUMNS1 2
#define COLUMNS2 4
#define ROWS1 3
#define ROWS2 2

int matrix_mult(int matrix1[ROWS1][COLUMNS1], int matrix2[ROWS2][COLUMNS2], int result[ROWS1][COLUMNS2]); //function statement 

int main() {
    
    int matrix1[ROWS1][COLUMNS1] = { {-1,0}, {5,10}, {18,-2} };
    int matrix2[ROWS2][COLUMNS2] = { {-10,8,9,4}, {2,3,5,-6} };
    
    //the multiplication result matrix will have the number of rows of the first matrix and the number of columns of the second matrix
    int result[ROWS1][COLUMNS2] = {{0}, {0}}; 
    
    //if the operation is invalid the function will return 0
    int valid = matrix_mult(matrix1, matrix2, result);
    
    //if the operation is valid print the result matrix
if (valid != 0) {
        for (int i=0; i<ROWS1; i++) {
        for (int j=0; j<COLUMNS2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
        }
    }
}

//this function calculate and return the multiply result for the input element ([row], [column])
int mult_operation(int matrix1[ROWS1][COLUMNS1], int matrix2[ROWS2][COLUMNS2], int row, int column) {
        
    int temp = 0;
        
        for (int i=0; i<ROWS2; i++) {
            temp += matrix1[row][i]*matrix2[i][column];
        }
    return temp;
}

//this function multiply matrix1 by matrix2, if the operation is not defined the function will print an error message and return 0
int matrix_mult(int matrix1[ROWS1][COLUMNS1], int matrix2[ROWS2][COLUMNS2], int result[ROWS1][COLUMNS2]) {
    
    //the multiplication operation can be done only if the numbers of the columns of the first matriz equals to the numbers of row of the second matrix
    if (COLUMNS1 != ROWS2) {
        printf("Multiplication operation is not defined for these matrices!");
        return 0;
    } else {
    
    //for each element in the result matrix calculate the multiply result by "mult_operation" function
    for (int row=0; row<ROWS1; row++) {
        for (int column=0; column<COLUMNS2; column++) {
            result[row][column] = mult_operation(matrix1, matrix2, row, column);
            }
        }
        return 1; //return 1 if the multiplay operation done
    }
}