#include <stdio.h>

int main() {
    unsigned int a = 4294967295;
    unsigned int b = 2;
    unsigned int c = 4;

    printf("%u\n", a + b);
    printf("%u\n", b - c);

    return 0;
}