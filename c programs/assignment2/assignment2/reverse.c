#include<stdio.h>
#include<conio.h>
int main()
{
	h_main();
	d_main();
	p_main();
	f_main();
	r_main();
	return 0;
}
int r_main()
{
	int num, rev = 0;
	scanf_s("\n%d", &num);
	while (num)
	{
		rev = rev * 10 + (num % 10);
		num = num / 10;
	}
	printf("\n reverse=%d", rev);
	system("pause");
	return 0;
}