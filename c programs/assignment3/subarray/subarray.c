#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],n,i,j,sum,flag,start=0;
	printf("enter the sum :");
	scanf_s("%d", &sum);
	printf("\nenter array size:");
	scanf_s("%d", &n);
	printf("\nenter array elements:");
	for (i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);
	for (i = 0; i < n; i++)
	{
		flag = arr[i];
		start = i ;
		for (j = i + 1; j < n; j++)
		{
			
			flag += arr[j];
			if (flag > sum)break;
			else if (flag == sum)
				printf("sum found between indexes %d and %d",start,j);
			else
				printf("no subarray found")
		}
	}
	system("pause");
	return 0;
}