#include<stdio.h>
#include<conio.h>
#include<math.h>
void dec_bin(int num)
{
	int bin[50],i=0,j;
	while (num)
	{
		bin[i++] = num % 2;
		num = num / 2;
	}
	num = 0;
	printf("\nbinary number==");
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", bin[j]);
		num = num + bin[j] * pow(2, j);
	}
	printf("decimal number==%d", num);
}
int d_main()
{
	int num;
	scanf_s("%d",&num);
	dec_bin(num);
	return 0;
}