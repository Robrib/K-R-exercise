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
	int parenthesis, brace, bracket;
	int s_quote, d_quote;
	
	parenthesis = brace = bracket = 0;
	s_quote = d_quote = -1;
	while ((len = get_line(line, MAXLINE)) > 0) {
		i = 0;
		while (i < len) {
			if (line[i] == '(') {
				++parenthesis;
			}
			if (line[i] == '[') {
				++brace;
			}
			if (line[i] == '{') {
				++bracket;
			}
			if (line[i] == ')') {
				--parenthesis;
			}
			if (line[i] == ']') {
				--brace;
			}
			if (line[i] == '}') {
				--bracket;
			}
			if (line[i] == '\'') {
				s_quote *= 1;
			}
			if (line[i] == '"') {
				d_quote *= 1;
			}
			++i;
		}
	}
	if (d_quote > 0)
		printf ("Mismatching double quote mark\n");
	if (s_quote > 0)
		printf ("Mismatching single quote mark\n");
	if (parenthesis > 0)
		printf ("Mismatching parenthesis\n");
	if (brace > 0)
		printf ("Mismatching brace mark\n");
	if (bracket > 0)
		printf ("Mismatching bracket mark\n");
	if (bracket <= 0 && brace <= 0 && parenthesis <= 0 && s_quote <= 0 && d_quote <= 0)
		printf ("Syntax appears to be correct.\n");
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
