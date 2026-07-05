#include<stdio.h>
int main(){
    char arr[] = {'A','t','l','a','s','!'};
    int i = 0;
    while(arr[i]!='!'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}