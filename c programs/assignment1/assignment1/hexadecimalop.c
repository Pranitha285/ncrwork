#include <stdio.h>

int main()
{
	int val = 0xCAFE;
	int r, l;
	
	if ((val & 14) == 14 || (val & 11) == 11 || (val & 13) == 13 || (val & 7) == 7 || (val & 15) == 15)
	{
		printf("Atleast 3 bits are on\n");
	}
	
	r = val << 4;
	l = val >> 12;

	val = r | l;
	printf("%x\n", r);
	system("pause");
	return 0;
}
