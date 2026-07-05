#include<stdio.h>
int main(){
    char str[] = "CollegeWallah";
    str[1]= 'b';
    int i =0;
    while(str[i]!='\0'){
        printf("%c",*(i+str));
        i++;
    }
    return 0;
}