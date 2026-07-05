#include<stdio.h>
int main(){
    int i,n;
    float a = 100;
    printf("Enter the Number of terms: ");
    scanf("%d",&n);


    for(i=1;i<=n;i++){ // WITHOUT USING MATHS
        printf("%f ",a);
        a = a/2;
        
    }

    return 0;
}