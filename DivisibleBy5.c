#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);

    if (x%5==0)
    {
        printf("Divisible By 5");
    }
    
    else{
        printf("Not Divisible By 5");
    }

    return 0;
}