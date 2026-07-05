#include<stdio.h>
int main(){
    int arr[7]={12,21,21,42,21,6,7};//LAST WAALA INDEX PRINT KARO
    int x = 21;
    for(int i=6;i>=0;i--){
        if(arr[i]==x){
            printf("%d is present in the array and its index is %d",x,i);
            break;
        }

    }
    return 0;
}