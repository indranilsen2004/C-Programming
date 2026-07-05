#include<stdio.h>
int main(){
    int l;
    printf("Enter Length: ");
    scanf("%d",&l);

    int b;
    printf("Enter Breadth : ");
    scanf("%d",&b);

    int a = l*b; // a for Area
    int p = 2*(l+b); //  p for Perimeter

    if(a>p){
        printf("Area is Greater Than Perimeter");
    }

    else if(a<p){
        printf("Area is Not Greater Than Perimeter");
    }

    else{
        printf("Area is Equal to Perimeter");
    }

    return 0;
}
