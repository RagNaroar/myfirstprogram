// #include <stdio.h>

// int main(){
//     int a = 5;
//     a += 2;
//     printf("sum: %d\n", a);

//     return 0;
// }
#include <stdio.h>

int main(){
    int a = 5;
    int b = 3;

    a += 2;
    b *= 4;
    a ^= b;
    b &= a;
    a >>= 1;
    b |= 1;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}