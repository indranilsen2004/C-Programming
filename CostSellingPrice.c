#include<stdio.h>
int main(){
    int cp;
    int sp;
    printf("Enter Cost Price : ");
    scanf("%d",&cp);
    printf("Enter Selling Price : ");
    scanf("%d",&sp);

    if(sp>cp){
        printf("Profit");
    }

    else if(cp>sp){
        printf("Loss");
    }
   
    else{
        printf("No Profit,No Loss");
    }

    return 0;
}