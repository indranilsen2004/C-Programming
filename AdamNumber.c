
// ADAM NUMBER ::A NUMBER IS AN ADAM NUMBER IF IT'S SQUARED THEN REVERSED THEN AGAIN WE FIND IT'S SQUARE ROOT AND AGAIN REVERSE RESULT NUMBER AND SEE IF IT IS EQUAL TO THE ORIGINAL NUMBER(12) 


#include<stdio.h>
int reverse(int n){
    int rev = 0;
    while(n>0){
        rev = rev*10+n%10;
        n/=10;
    }
    return rev;
}
int isAdam(int n){
    int sq = n*n;
    int rev = reverse(n);
    int revSq = rev * rev;
    if(sq==reverse(revSq)) return 1;
    else return 0;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(isAdam(num)){
        printf("%d is an Adam Number\n",num);
    }
    else{
        printf("%d is not Adam Number");
    }
    return 0;
}
