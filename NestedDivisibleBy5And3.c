#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n%5==0){
        if(n%3==0){
            printf("The Number is divisible by 5 and 3");
        }
        else{
            printf("The Number is not divisible by 5 and 3");
        }
    }

    else{
        printf("The Number is not divisible by 5 and 3");
        }

    return 0;
}