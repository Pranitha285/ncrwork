#include<iostream>
using namespace std;
void swap_value(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap_reference(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a, b;
	cout << "enter 2 numbers:";
	cin >> a >> b;
	int ch;
	cout << "\n1.swap by value\n2.swap by reference";
	cin >> ch;
	switch (ch)
	{
	case 1:swap_value(a, b); break;
	case 2:swap_reference(&a, &b); break;
	default:cout << "invalid choice"; break;
	}
	cout << "\nafter swapping\n" << a<<"     "<< b;
	system("pause");
	return 0;
}