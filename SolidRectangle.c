#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columns: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){ // outer loop --> no of lines/rows
        for(int i=1;i<=m;i++){ //inner loop --> no of stars in each line/columns
            printf("* ");
        }
        printf("\n");// har line ke baad new line print karne ke liye
    }

    return 0;
}