//
// Created by honglin ma on 2018/5/9
//

#include <stdio.h>

#define MAXLINE 1000
#define TAB_LENGTH 8
int get_line(char line[], int maxline);
void detab(char line[]);

main()
{
	int len;
	char line[MAXLINE];
	
	while ((len = get_line(line, MAXLINE)) > 0) {
		detab(line);
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

void detab(char line[])
{
	int i, j, t, count;
	
	count = 0;
	i = 0;
	while (line[i] != '\0') {
		if (line[i] == '\t') {
			t = TAB_LENGTH - (count % TAB_LENGTH);
			for(j = 0; j < t; ++j) {
				putchar(' ');
				++count;
			}
		}
		else {
			putchar(line[i]);
			++count;
		}
		++i;
	}	
}