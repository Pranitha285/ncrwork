#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n*fact(n - 1);
}
int f_main()
{
	int num;
	scanf_s("\n%d", &num);
	printf("\nfactorial=%d", fact(num));
	return 0;
}