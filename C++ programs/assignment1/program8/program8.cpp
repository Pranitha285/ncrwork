#include<iostream>
using namespace std;
class employee
{
public:
	employee()
	{
		cout << "\ndefault construction\n";
	}
	employee(int a)
	{
		cout << "\nconstructor with call_by_value\n"<<a;
	}
	employee(int *b)
	{
		cout << "\nconstructor with call_by_reference\n" << *b;
	}
};
int main()
{
	int a;
	cout << "\nenter a value:";
	cin >> a;
	employee e1, e2(a), e3(&a);
	cout << "\nsize of e1:"<<sizeof(e1);
	cout << "\nsize of e2;" << sizeof(e2);
	cout << "\nsize of e3:" << sizeof(e3);
	system("pause");
	return 0;
}