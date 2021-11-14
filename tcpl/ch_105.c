
#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    
    while ((c = getchar()) != EOF) {
        // 遇到一个字符 +1
        ++nc;
        // 遇到回车符 +1
        if (c == '\n')
            ++nl;
        // 遇到的字符是空格、换行、制表符表示不再单词中
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        // 否则是在单词中 nw+1  
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}