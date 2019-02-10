#include<stdio.h>
int main()
{
	int min = 0, max = 0, avg = 0,arr[30],i=0,j;
    for(i=0;i<30;i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] <= 0)break;
	}
	i--;
	for (j = 0; j < i; j++)
	{
		avg += arr[j];
		if (arr[j] > max)max = arr[j];
		if(arr[j] < min)min = arr[j];
	}
	avg /= i;
	printf("\n count==%d\nmaximum==%d\nminimum==%d\naverage==%d\n",i, max, min, avg);
	system("pause");
	return 0;
}