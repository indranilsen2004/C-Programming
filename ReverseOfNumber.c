#include<stdio.h>
int main(){
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);

    int r = 0; //r for reverse
    while(n != 0){
        r = (r * 10) + (n % 10);
        n = n / 10;
    }
    printf("Reverse Of Number : %d",r);
    return 0;
}