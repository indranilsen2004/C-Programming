#include<stdio.h>
int main(){
    int arr[7]={21,54,62,41,38,74,26};
    int x = 21;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            printf("%d is present in the array and its index is %d",x,i);
            break;
        }

    }
    return 0;
}