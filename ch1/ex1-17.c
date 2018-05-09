//
// Created by honglin ma on 2018/5/9
//

#include <stdio.h>
#define MAXLINE 1000
#define LIMIT 80
int get_line(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
    int len, c;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (line[len - 1] != '\n') {
            while ((c = getchar()) != EOF && c != '\n')
                ++len;
            if (c == '\n')
                ++len;
        }
        if (len > LIMIT) {
            printf("%s", line);
        }
    }
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

