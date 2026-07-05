#include<stdio.h>
void increasing(int x , int n){  //PARAMETERISED WAY,USING EXTRA VARIABLE
    if(x>n) return;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
    
}
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
   
    increasing(1,n);
    return 0;
}