//
// Created by honglin ma on 2018/5/8.
//

#include <stdio.h>

main()
{
    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
        if (c == 0x1b)  // 'ESC'
            break;
    }
    printf("blank:\t%d\ntab:\t%d\nline:\t%d\n", nb, nt, nl);
}


