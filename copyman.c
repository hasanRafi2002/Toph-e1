#include <stdio.h>

int main() {
    unsigned int a = 5;   // 0101 in binary
    unsigned int b = 9;   // 1001 in binary

    printf("a & b = %d\n", a & b);   // 0001 = 1
    printf("a | b = %d\n", a | b);   // 1101 = 13
    printf("a ^ b = %d\n", a ^ b);   // 1100 = 12
    printf("~a = %d\n", ~a);         // ...1010 (depends on int size)
    printf("b << 1 = %d\n", b << 1); // 10010 = 18
    printf("b >> 1 = %d\n", b >> 1); // 0100 = 4

    return 0;
}
