#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return n; //BASE CASE
    int recAns = n + sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int s = sum(n);
    printf("%d",s);
    return 0;

}