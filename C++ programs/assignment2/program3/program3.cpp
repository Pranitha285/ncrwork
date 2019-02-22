#include<iostream>
using namespace std;
class Employee
{
	char name[20];
	int empno;
	int salary;
public:
	Employee()
	{
		empno = salary = 0;
		name[0] = '\0';
	}
	~Employee()
	{
		delete[]name;
	}
	void reading()
	{
		cout << "\nEmployee Details:";
		cout << name << endl << empno << endl << salary << endl;
	}
	friend istream& operator >> (istream& cin, Employee &e);
};
istream& operator >> (istream& cin, Employee &e)
{
	cout << "enter employee details:";
	cin >> e.name;
	cin >> e.empno >> e.salary;
	return cin;
}
int main()
{
	Employee e[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> e[i];
		e[i].reading();
	}
	system("pause");
	return 0;
}