#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);
    printf("Your Input was:%s",str);
    
    return 0;
}