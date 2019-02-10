#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char * strtokf(char *str, char *delim)
{
	static char *pos = NULL;
	char *start = NULL;
	if (str)
	{
		pos = str;
	}
	if (pos)
	{
		while (*pos && strchr(delim, *pos))
			pos++;
		if (*pos)
		{
			start = pos;
			while (*pos && !strchr(delim, *pos))
				pos++;
			if (*pos)
				*pos++ = '\0';
		}
	}
	return start;
}
int main()
{
	char s[50];
	printf("Enter the string\n");
	gets(s);
	char delim[10];
	printf("Enter the delimiters\n");
	gets(delim);
	char *token;
	token = strtokf(s, delim);
	while (token != NULL) {
		printf("%s\n", token);

		token = strtokf(NULL, delim);
	}
	system("pause");
	return 0;
}