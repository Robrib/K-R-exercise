//
// Created by honglin ma on 2018/5/8.
//

#include <stdio.h>

#define IN  1
#define OUT 0

main()
{
    int c, word_len, state;

    state = OUT;
    word_len = 0;
    while((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            printf("\t");
            for (int i = 0; i < word_len; ++i)
                putchar('|');
            printf("\n");
            state = OUT;
            word_len = 0;
        }
        else {
            state = IN;
            putchar(c);
            ++word_len;
        }
    }
}
