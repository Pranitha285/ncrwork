#include<iostream>
using namespace std;
inline int add(int a, int b)
{
	return (a + b);
}
inline int sub(int a, int b)
{
	return (a - b);
}
inline int mul(int a, int b)
{
	return (a*b);
}
inline int divi(int a, int b)
{
	return (a / b);
}
inline int mod(int a, int b)
{
	return (a%b);
}
int main()
{
	int a, b;
	cout << "enter 2 numbers:";
	cin >> a >> b;
	cout << "\naddittion" << add(a, b);
	cout << "\nsubstraction" << sub(a, b);
	cout << "\nmultiplication" << mul(a, b);
	cout << "\ndivision" << divi(a, b);
	cout << "\nmodulous" << mod(a, b);
	system("pause");
	return 0;
}