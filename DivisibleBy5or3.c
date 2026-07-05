#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n%5==0 || n%3==0){
        printf("It is divisible By 5 or 3");

    }

    else{
        printf("It is not divisible By 5 or 3");
    }

    return 0;
}