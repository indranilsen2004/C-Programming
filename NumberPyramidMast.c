#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);

    int nsp = n - 1;
    for(int i = 1;i<=n;i++){
        int a = i-1;
        for(int q = 1;q<=nsp;q++){ // SPACES KE LIYE EK LOOP
            printf(" ");
        }
        nsp--;
        for(int j = 1;j<=i;j++){ // NUMBER TRIANGLE 
            printf("%d",j);
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}
