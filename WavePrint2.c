#include <stdio.h>

int main() {
    int m;
    printf("Enter no of rows: ");
    scanf("%d", &m);

    int n;
    printf("Enter no of columns: ");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nWave Print:\n");

    for(int j = 0; j < n; j++) {
        if(j % 2 == 0) {
            // Bottom to Top
            for(int i = m - 1; i >= 0; i--) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        else {
            // Top to Bottom
            for(int i = 0; i < m; i++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}