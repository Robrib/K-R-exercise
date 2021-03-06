//
// Created by honglin ma on 2018/5/9
//

#include <stdio.h>
#define MAXLINE 1000
int get_line(char line[], int maxline);


main()
{
	int len, c, i, j;
	char line[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0) {
		if (line[0] == '\n')
			continue;
		if ((line[len - 2] == '\t' || line[len - 2] == ' ') && line[len - 1] == '\n') {
			i = len - 2;
			while(line[i] == '\t' || line[i] == ' ')
				--i;
			for (j = 0; j <= i; ++j)
				putchar(line[j]);
			putchar('\n');
		}
		else {
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
