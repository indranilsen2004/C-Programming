//KRISHNAMURTY NUMBER IS TYPE OF 145 =1!+4!+5!

#include<stdio.h>
int main(){
    int n,temp,rem,sum=0,fact;
    printf("Enter Number: ");
    scanf("%d",&n);
    temp = n;
    while(temp>0){
        rem = temp % 10;
        fact=1;
        for(int i=1;i<=rem;i++){
            fact *= i;
        }
        sum += fact;
        temp /=10;
    }
    if(sum==n){
        printf("%d is a Krishnamurty Number\n",n);
    }
    else{
        printf("%d is not Krishnamurty Number",n);
    }
    return 0;
}