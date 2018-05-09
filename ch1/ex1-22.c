//
// Created by honglin ma on 2018/5/9
//

#include <stdio.h>

#define MAXLINE 1000
#define TAB_LENGTH 8
int get_line(char line[], int maxline);


main()
{
	int len, i, j;
	char line[MAXLINE];
	
	j = 0;
	while ((len = get_line(line, MAXLINE)) > 0) {
		for (i = 0; i < len; ++i) {
			if (line[i] == '\t') {
				putchar('\n');
				j = 0;
			}
			else {
				putchar(line[i]);
				++j;
				if (j % TAB_LENGTH == 0) {
					putchar('\n');
					j = 0;
				}
			}
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

