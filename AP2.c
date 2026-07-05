#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=4;i<=3*n+1;i=i+3){ // an=a+(n-1)d     an=4+(n-1)3   =4+3n-3    =3n+1
        printf("%d ",i);
    }

    return 0;
}