#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "College Wallah";
    char* ptr = str; //ptr now points to to str [0]
    int i = 0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    
    return 0;
}