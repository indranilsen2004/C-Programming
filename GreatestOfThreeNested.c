#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter 1st Number: ");
    scanf("%d",&a);

    printf("Enter 2nd Number: ");
    scanf("%d",&b);

    printf("Enter 3rd Number: ");
    scanf("%d",&c);

   if(a>b){ // b is out of race
    if(a>c){
        printf("%d is greatest",a);
    }
    else{ // a<c
        printf("%d is greatest",c);
    }
   }
   else{ // b>a ------ a aab sabse bada toh nahi hai
    if(b>c){
        printf("%d is greatest",b);
    }
    else{
        printf("%d is greatest",c);
    }
   }


    return 0;
}
