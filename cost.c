#include <stdio.h>

int main(){
    int blocks = 55;
    float cost_per_block = 2.7;
    float total_cost = cost_per_block * blocks;
    char currency = '$';

    printf("number of blocks: %d\n", blocks);
    printf("cost per block: %.2f %c\n", cost_per_block, currency);
    printf("total cost: %.2f %c\n", total_cost, currency);

    return 0;
}