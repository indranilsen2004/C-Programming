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

void change(pokemon* p){
    p->hp = 70; //(*x).something = x->something
    (*p).speed = 80;
    (*p).attack = 110;
    (*p).tier = 'S';
    strcpy((*p).name,"Riachu");
}

int main(){
    pokemon pikachu = {60,70,100,'A',"Pikachu"};
    // pikachu.hp = 60;
    // pikachu.attack= 70;
    // pikachu.speed = 100;
    // pikachu.tier= 'A';
    // strcpy(pikachu.name,"Pikachu");



    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    
    return 0;
}