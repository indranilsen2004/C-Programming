#include<stdio.h>
void increasing(int n){
    if(n==0) return; //AFTER RECURSIVE CALL
    
    increasing(n-1);
    printf("%d\n",n);

    return;
    
}
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
   
    increasing(n);
    return 0;
}