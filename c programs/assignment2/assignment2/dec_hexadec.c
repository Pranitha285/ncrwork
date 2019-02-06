#include<stdio.h>
#include<conio.h>
#include<math.h>
void dec_hex(int num)
{
	int  i = 0, j,rem=0;
	char hex[20];
	while (num)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i++] = 48 + rem;
		else
			hex[i++] = 55 + rem;

		num = num / 16;
	}
	num = 0;
	printf("\nbinary number==");
	for (j = i-1; j >= 0; j--)
	{
		printf("%c", hex[j]);
		if (hex[j] >='0' && hex[j]<='9')
			num = num + (hex[j] - 48) * pow(16,j);
		else
			num = num + (hex[j] - 55) * pow(16,j);
	
	}

	printf("\ndecimal number==%d", num);
}
int h_main()
{
	int num;
	scanf_s("%d", &num);
	dec_hex(num);
	return 0;
}