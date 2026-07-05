#include<stdio.h>
int main(){
    int n;
    printf("Enetr a Number : ");
    scanf("%d",&n);

    if(n>5){
        printf("The Number is greater than 5");
    }

    
    else if(n<5){
        printf("The Number is not greater than 5");
    }

    else{
        printf("The Number is itself 5");
    }

    return 0;
}