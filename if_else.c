#include <stdio.h>
#include <stdlib.h>
#include "if_else.h"

void block_1(){
    int requiredXP = 1000;
    int playerXP = 100;
    int retake;

        if(playerXP >= requiredXP){
        int retake = playerXP - requiredXP;
        printf("You leveled up! You have %d extra XP\n", retake);
        printf("lets go to the next level\n");
    }else{
        int needXP  = requiredXP - playerXP;
        printf("You need %d more XP to level up\n", needXP);
        printf("keep grinding\n");
    }
    

}

void block_2(){
    int requireAge = 18;
    int userAge;
    scanf("%d", &userAge);
    if(userAge >= requireAge){
        printf("О тебе %d тогда можно играть в игру\n", userAge);
    }else{
        printf("тебе нету даже %d, иди домой\n", requireAge);
    }
    //тут научился использовать system("clear") наконец то емае
    printf("нажми на Enter чтобы очистить экран\n");
    getchar();
    getchar();
    system("clear");
    
}