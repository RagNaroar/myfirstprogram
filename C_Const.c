#include <stdio.h>

int main(){
    const int my_birtday = 2007;
    const float today_year = 2025.12;
    int my_age;
    int age = (int)today_year - my_birtday;
    my_age = age;
    printf("my age is %d\n", my_age);

    return 0;
}