#include<stdio.h>
int main(){
    char str[] = "Hello!";
    char arr[] = {'H','e','l','l','o','!'};  //SIZE = 6
    
    int i =0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}