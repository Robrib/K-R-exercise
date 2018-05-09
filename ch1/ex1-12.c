//
// Created by honglin ma on 2018/5/8.
//

#include <stdio.h>

main()
{
    int c;
    
    while((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ')
            printf("\n");
        else
            putchar(c);
    }
}
