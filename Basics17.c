#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "College Wallah";
    char* p = str;
    *p = 'P';
    printf("%s",str);
    
    return 0;
}