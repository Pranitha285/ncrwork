#include<stdio.h>

int main()

{

	int c, n, p = 0, count = 0, pro = 1, r, i = 0, sum = 0, arr[10], temp;

	printf("enter n");

	scanf_s("%d", &n);

	temp = n;

	while (n>0)

	{

		r = n % 10;

		arr[i] = r;

		n = n / 10;

		p++;

		i++;

	}

	for (i = 0; i<p; i++)

	{

		c = p;

		while (c>0)

		{

			pro = pro*arr[i];

			c--;

		}

		sum = sum + pro;

		pro = 1;

	}

	if (sum == temp)

		printf("armstrong");

	else

		printf("not");
	system("pause");

	return 0;

}