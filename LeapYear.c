#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);

    if (x%4==0)
    {
        printf("Leap Year");
    }
    
    else{
        printf("Not A Leap Year");
    }

    return 0;
}