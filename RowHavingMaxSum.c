#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int maxSum = -999999;
    int rowIndex = 0;

    for(int i = 0; i < rows; i++) {
        int sum = 0;

        for(int j = 0; j < cols; j++) {
            sum += a[i][j];
        }

        if(sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    }

    printf("Row with maximum sum = %d\n", rowIndex);
    printf("Maximum sum = %d\n", maxSum);

    return 0;
}