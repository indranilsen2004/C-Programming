#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={-10,-40,-200,-80,-19,-5,-12};
    int max = INT_MIN;//sabse chota number
    for(int i=1;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
   
    printf("%d",max);
    return 0;
}