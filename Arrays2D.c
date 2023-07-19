//Jason Lahoda, 3/4/23, CIS2107
//Lab 5 2D Arrays
//This program contais several different 2D array functions.
#include <stdio.h>
#include <stdlib.h>

int max(int row, int col, int arr[row][col]) {
    int maxNum = arr[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > maxNum) {
                maxNum = arr[i][j];
            }
        }
    }
    return maxNum;
}

int rowSum(int row, int col, int arr[row][col]) {
    int sum = 0;
    for (int i = 0; i < col; i++) {
        sum += arr[row][i];
    }
    return sum;
}

int colSum(int row, int col, int arr[row][col]) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        sum += arr[i][col];
    }
    return sum;
}

void isSquare(int row, int col) {
    if (row == col){
        puts("\nThis is a square array.\n");
    }
    else{
        puts("\nThis is not a square array.\n");
    }
}

void displayOutputs(int row, int col, int arr[row][col]) {
    printf("Here is your 2Dim array:\n");
    for (int i = 0; i < row; i++) {
        printf("[");
        for (int j = 0; j < col; j++) {
            printf("%d", arr[i][j]);
            if (j + 1 != col) {
                printf(", ");
            }
        }
        puts("]");
    }
}

int main() {
    puts("Let's create a 2Dim array!\n");
    printf("\tHow many rows? ");
    int row, col, temp;
    scanf("%d", &row);
    printf("\tHow many columns? ");
    scanf("%d", &col);
    puts("");
    int arr[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("\tenter [%d][%d]: ", i, j);
            scanf("%d", &temp);
            arr[i][j] = temp;
        }
    }
    puts("");
    
    for (int i = 0; i < row; i++){
        printf("Sum of row %d = %d\n", i + 1, rowSum(i, col, arr));
    }
    puts("");
    for (int j = 0; j < col; j++){
        printf("Sum of column %d = %d\n", j + 1, colSum(row, j, arr));
    }
    isSquare(row, col);
    displayOutputs(row, col, arr);
    exit(0);
}