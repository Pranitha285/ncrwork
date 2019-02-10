#include<stdio.h>
#include<math.h>
int rotate_right(int n, int b)
{
	return ((n >> b) | (n << (32 - b)));
}

int main()
{
	int n, b;
	printf("Enter the number to rotate\n");
	scanf_s("%d", &n);
	printf("Enter the number of positions to rotate\n");
	scanf_s("%d", &b);
	int res =rotate_right(n,b);
	printf("Result: %d\n", res);
	system("pause");
	return 0;
}