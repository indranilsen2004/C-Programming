#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d ",&n);

    int a = 0;
    for(int i=2;i<n;++i){
        if(n%i==0){
        a = 1;
        break;
        }
    }
    if(n==1)printf("Neither Prime Nor Composite");
    else if(a==0)printf("Given Number is Prime\n");
    else printf("Given Number is Composite\n");

    return 0;
}