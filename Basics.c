#include<stdio.h>
int main(){
    struct pokemon{//USER DEFINED DATATYPE
        int hp;
        int speed;
        int attack;
        char tier;
    };


    struct pokemon pikachu;

    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("%d",pikachu.attack);

    struct pokemon charizad;

    charizad.attack = 130;
    charizad.hp = 80;
    charizad.speed = 80;
    charizad.tier = 'S';

    
    struct pokemon mewtwo;

    mewtwo.attack = 170;
    mewtwo.hp = 150;
    mewtwo.speed = 200;
    mewtwo.tier = 'G';


    return 0;
}