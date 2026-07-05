#include<stdio.h>
#include<string.h>
int main(){
    char* s1 = "College Wallah";
    
    char* s2;
    s2 = s1;

    s2 = "Physics Wallah";
    printf("%s\n",s1);
    printf("%s",s2);
    
    return 0;
}