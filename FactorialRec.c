#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1; //BASE CASE
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    return 0;

}