#include <stdio.h>
#include <stdlib.h>

// int main(){
//     int requiredXP = 1000;
//     int playerXP = 1001;

//         if(playerXP >= requiredXP){
//         int extraXP = playerXP - requiredXP;
//         printf("You leveled up! You have %d extra XP\n", extraXP);
//         printf("lets go to the next level\n");
//     }else{
//         int needXP = requiredXP - playerXP;
//         printf("You need %d more XP to level up\n", needXP);
//         printf("keep grinding\n");
//     }
//     return 0;

// }

int main(){
    int requireAge = 18;
    int userAge;
    scanf("%d", &userAge);
    if(userAge >= requireAge){
        printf("О тебе %d тогда можно играть в игру\n", userAge);
    }else{
        printf("тебе нету даже %d, иди домой\n", requireAge);
    }
    //тут научился использовать system("clear") наконец то емае
    printf("Press Enter to clear the screen...");
    getchar();
    getchar();
    system("clear");
    return 0;
}