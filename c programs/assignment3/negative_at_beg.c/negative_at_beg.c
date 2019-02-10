#include<stdio.h>
#include<conio.h>

int main()
{
	int n,j, arr[20], k,i,flag=0,temp;
	printf("\nenter array size:");
	scanf_s("%d", &n);
	printf("\nenter array elements:");
	for(i=0;i<n;i++)
	scanf_s("%d", &arr[i]);
	for (i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			//printf("%d", arr[i]);
			//swap(arr[i], arr[flag]);
			//temp = arr[i];
			//arr[i] = arr[flag];
			//arr[flag] = temp;
			
			temp = arr[i];
			for (j = i;j > flag; j--)
				arr[j] = arr[j-1];
			arr[flag] = temp;
			flag++;
		}
	}
	printf("\n New array:\n");
	for (i = 0; i < n; i++)
		printf("%d    ", arr[i]);
	system("pause");
	return 0;
}