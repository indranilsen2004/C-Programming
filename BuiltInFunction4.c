#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "Indranil";
    printf("%s\n",str);
    //2 nd index pe 'l'
    for(int i=6;i>=3;i--){
        str[i+1] = str[i];
    }

    str[2] = 'k';
    printf("%s",str);
    return 0;
}