#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={21,54,62,41,38,74,26};
    int x = 38; // ELEMENT ARRAY PE NAHI HAI
    int check = 0;// 0 means the element is not present in array
    int idx = -1;
    bool flag = false;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            flag = true; // true means element is present
            idx = i;
            break;
        }

    }

    if(flag==false){
        printf("%d is not present in the array",x);
    }

    else{
        printf("%d is present in the array and its index is %d",x,idx);
    }
    return 0;
}