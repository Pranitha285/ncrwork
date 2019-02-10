#include<stdio.h>
#include<math.h>
int invertponwards(int num, int p, int b)
{
	int ans = 0;
	int bin[60], i = 0;
	while (num)
	{
		bin[i++] = num % 2;
		num/=2;
	}
	i--;
	int k = i - p;
	for (int temp = 0; temp<b; temp++, k--)
	{
		if (bin[k] == '1')
			bin[k] = '0';
		else if(bin[k]=='0')
			bin[k] = '1';
	}
	int j = 0;
	while (i>=0)
	{
		ans = ans  + bin[i]*pow(2,j);
		j++; i--;
	}
	return ans;
}
int main()
{
	int num;
	printf("Enter any number\n");
	scanf_s("%d", &num);
	int p, b;
	printf("Enter the position to invert\n");
	scanf_s("%d", &p);
	printf("Enter the number of bits to invert\n");
	scanf_s("%d", &b);
	printf("\n%d", invertponwards(num, p- 1, b));
	system("pause");
	return 0;
}