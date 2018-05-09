//
// Created by honglin ma on 2018/5/8
//

#include <stdio.h>

#define MAX_LENGTH 128

main()
{
    int c; 
    int i, j; 
    int counts[MAX_LENGTH];

    for (i = 0; i < MAX_LENGTH; ++i)
        counts[i] = 0;
    while((c = getchar()) != EOF)
        ++counts[c];
    for (i = 0; i < MAX_LENGTH; ++i) {
        if (counts[i] != 0) {
            putchar(i);
            printf(":\t");
            for (j = 0; j < counts[i]; ++j)
                putchar('|');
            printf("\n");
        }
    }
}

