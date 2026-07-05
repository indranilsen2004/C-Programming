#include<stdio.h>
int main(){
    int arr[5] = {2,4,6,8,1};
    arr[4] = 100;
    arr[1] = 7;
    printf("%d\n",arr[4]);
    printf("%d",arr[1]);
    return 0;
}