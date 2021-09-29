#include <stdio.h>

int fib(int n) {
    if (n == 2 || n == 1)
        return 1;
    int pre = 1, cur = 1;
    for (int i = 3; i <= n; i++) {
        int sum = pre + cur;
        pre = cur;
        cur = sum;
    }
    return cur;
}

int main() {
    int res = fib(4);
    printf("%d", res);
}