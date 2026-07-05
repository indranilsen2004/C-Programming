#include<stdio.h>
int main(){
    int a;
    printf("Enter 1st Number: ");
    scanf("%d",&a);

    int b;
    printf("Enter 2nd Number: ");
    scanf("%d",&b);

    int c;
    printf("Enter 3rd Number: ");
    scanf("%d",&c);

    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("Valid Triangle");
    }

    else{
        printf("Invalid Triangle");
    }


    return 0;
}


