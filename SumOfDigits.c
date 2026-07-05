#include<stdio.h>
int main(){
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);

    int sum = 0;
    int lastDigit = 0;

    while(n!= 0){
        lastDigit = n % 10;
        sum += lastDigit;
        n = n / 10;
    }
    printf("Sum Of Digits : %d",sum);
    return 0;
}