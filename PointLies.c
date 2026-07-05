#include <stdio.h>

int main() {
    int x,y;
    printf("Enter The Co-Ordinates: ");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0){
        printf("Lies on Origin");
    }
    else if(x==0){
        printf("Lies on y-axis");
    }
    else if(y==0){
        printf("Lies on x-axis");
    }
    else{
        printf("The Point does not lie on x or y axis");
    }
    return 0;
}
