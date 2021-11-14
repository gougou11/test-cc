#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a = 2147483647;
    int b = a + 1;
    printf("b = %d\n", b);
    printf("0x%x\n", a);

    // printf("0x%x\n", a + 1);
    return 0;
}