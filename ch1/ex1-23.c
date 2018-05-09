//
// Created by honglin ma on xxxx/xx/xx
//

#include <stdio.h>

#define MAXLINE 1000
#define TAB_LENGTH 8
int get_line(char line[], int maxline);

main()
{
	int len, i;
	char line[MAXLINE];
	int in_comment;
	int in_quote;
	
	
	in_comment = 0;
	in_quote = -1;
	while ((len = get_line(line, MAXLINE)) > 0) {
		i = 0;
		while(i < len) {
			if (line[i] == '"') {
				in_quote *= -1;
			}
			if (in_quote < 0) {
				if (line[i] == '/' && line[i+1] == '*') {
					in_comment = 1;
					i += 2;
				}
				if (line[i] == '*' && line[i+1] == '/') {
					in_comment = 0;
					i += 2;
				}
				if (in_comment > 0) {
					++i;
				}
				else {
					putchar(line[i]);
					++i;
				}
			}
			else {
				putchar(line[i]);
				++i;
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
