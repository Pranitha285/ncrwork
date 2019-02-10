#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf_s("%d", &n);
	char *s[20];
	for (int i = 0; i<n; i++)
	{
		s[i] = (char *)malloc(sizeof(char) * 10);
		gets(s[i]);
		//scanf_s("%s",s[i]);
	}
	for (int i = 0; i<n; i++)
	{
		printf("%s\n", s[i]);
	}
	for (int i = 0; i<n; i++)
	{
		free(s[i]);
	}
	free(s);
	system("pause");
	return 0;
}