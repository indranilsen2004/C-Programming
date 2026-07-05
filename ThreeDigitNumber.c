#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n>99 && n<1000){
        printf("It is a Three Digit Number");

    }

    else{
        printf("It is not a three digit number");
    }

    return 0;
}


