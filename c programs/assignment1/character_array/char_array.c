#include<stdio.h>
#include<string.h>
int main()
{
	char text[80],len,i,digit=0,alpha=0,space=0,tab=0;
	gets(text);
	//scanf("%[^\n]s",text);
	len = strlen(text);
	for (i = 0; i < len; i++)
	{
		if (text[i] == ' ')
			space++;
		else if (text[i] == '	')
			tab++;
		else if (text[i]>= '0'&&text[i] <= '9')
			digit++;
		else if ((text[i] >= 'a'&&text[i] <= 'z') || (text[i]>= 'A'&&text[i] <= 'Z'))
			alpha++;
	}
	printf("\nnof digits=%d\nno of alphabets=%d\nno of spaces=%d\nno of tabs=%d", digit, alpha, space, tab);
	system("pause");
	return 0;
}