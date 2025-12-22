#include <stdio.h>

int main(){
    int max_score = 500;
    int player_score = 236;

    float percentage = (float)player_score / max_score * 100;

    printf("percentage is %.2f\n", percentage);
    return 0;
}