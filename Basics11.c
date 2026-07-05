#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    gets(str);//Entire Sentence can be input
    printf("Your Input was:%s",str);
    
    return 0;
}