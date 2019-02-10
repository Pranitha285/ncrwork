#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[20];
	int num;
	printf("Enter the string\n");
	gets(s);
	printf("%d\n", strlen(s));
	for (int i = 0; i<strlen(s); i++)
	{
		if (islower(s[i]))
		{
			s[i] = (char)toupper(s[i]);
		}
		else if (isupper(s[i]))
		{
			s[i] = (char)tolower(s[i]);
		}
	}
	printf("resultant string is\n");
	printf("%s\n", s);
	system("pause");
	return 0;
}