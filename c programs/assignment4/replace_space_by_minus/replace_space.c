#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int replace(char s[],int n)
{
	int count = 0;
	for (int i = 0; i<n; i++)
	{
		if (s[i] == ' ')
		{
			s[i] = '-';
			count++;
		}
	}
	return count;
}
int main()
{
	char s[50];
	printf("Enter the string\n");
	gets(s);
	int res = replace(s,strlen(s));
	printf("result is\n");
	printf("%s\n", s);
	printf("%d\n", res);
	system("pause");
	return 0;
}