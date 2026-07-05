#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "College Wallah";
    char* ptr = str; //ptr now points to to str [0]
    int i = 0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    
    return 0;
}