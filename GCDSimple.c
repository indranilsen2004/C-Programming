#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is: ",a,b);

    while(b!=0){
        temp = b;
        b = a%b;
        a = temp;
    }
    printf("%d\n",a);
    return 0;
}