#include<stdio.h>
int main()
{
	int num, rev = 0,flag;
	scanf_s("\n%d", &num);
	flag = num;
	while (num)
	{
		rev = rev * 10 + (num % 10);
		num = num / 10;
	}
	if(flag==rev)
	printf("\n pallindrome");
	else
		printf("not a pallindrome");
	system("pause");
	return 0;
}