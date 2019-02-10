#include<stdio.h>
int main()
{
	int num, sum = 0;
	scanf_s("\n%d", &num);
	while (num)
	{
		sum+= (num % 10);
		num = num / 10;
	}
	printf("\n Sum =%d\n", sum);
	system("pause");
	return 0;
}