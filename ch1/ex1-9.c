//
// Created by honglin ma on 2018/5/8.
//

#include <stdio.h>

main()
{
    int c, c_prev;

    c_prev = 1;
    while((c = getchar()) != EOF) {
        if (c == 0x1b)  // 'ESC'
            break;
        if (c == ' ') {
            if (c_prev == ' ')
                c_prev = c;
            else {
                putchar(c);
                c_prev = c;
            }
        }
        else {
            putchar(c);
            c_prev = c;
        }
    }
}