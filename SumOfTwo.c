#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    printf("Enter 1 st Number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2 nd Number : ");
    scanf("%d",&b);
    int sum =add(a,b);
    printf("%d",sum);

    return 0;
}