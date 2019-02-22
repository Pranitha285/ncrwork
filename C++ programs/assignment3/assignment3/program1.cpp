#include<iostream>
using namespace std;
template<typename T>
void Linearsearch(T arr[], int n, T search)
{
	for (int i = 0; i < n; i++)
	{
		if (search == arr[i])
		{
			cout << "\nelement found at  " << i;
			return;
		}
	}
	cout << "\nelement not found";
}
int main()
{
	int n;
	int arr1[20];
	char arr2[20],s2;
	float arr3[20],s3;
	int s1;
	cout << "enter no of elements:";
	cin >> n;
	cout << "\nenter integer elements:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	cout << "\nenter integer search element:";
	cin >> s1;
	Linearsearch(arr1, n, s1);
	cout << "\nenter character elements:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}
	cout << "\nenter char element to search:";
	cin >> s2;
	Linearsearch(arr2, n, s2);
	cout << "\nenter float elements:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr3[i];
	}
	cout << "\nenter float element to search:";
	cin >> s3;
	Linearsearch(arr3, n, s3);
	system("pause");
	return 0;
}