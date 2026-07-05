#include <stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;

int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack= 70;
    pikachu.speed = 100;
    pikachu.tier= 'A';
    strcpy(pikachu.name,"Pikachu");

    printf("%d\n",pikachu.hp);

    
    pokemon* x = &pikachu;


    (*x).hp = 70;
    printf("%d",pikachu.hp);

    return 0;
}