#include<stdio.h>
#include<conio.h>
int main()
{
	int bits[8],i,count=0;
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &bits[i]);
		if (bits[i] == 1)
			count++;
	}
	printf("count =%d", count);
	system("pause");
	return 0;
}
