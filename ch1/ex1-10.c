//
// Created by honglin ma on 2018/5/8.
//

#include <stdio.h>

main()
{
    int c;

    while((c = getchar()) != EOF) {
        if (c == 0x1b)  // 'ESC'
            break;
        if (c == '\t') {
            printf("\\t");
        }
        else if (c == '\b') {
            printf("\\b");
        }
        else if (c == '\\') {
            printf("\\\\");
        }
        else {
            putchar(c);
        }
    }
}