#include<iostream>
using namespace std;
class complex
{

public:
	int real, imag;
	complex()
	{
	}
	complex(int r, int i)
	{
		real = r;
		imag = i;
	}
	complex(const complex &c)
	{
		real = c.real;
		imag = c.imag;
	}
	~complex()
	{
	}
	complex operator+(complex a);
	complex operator-(complex a);
	complex operator-();
	complex operator++();
	complex operator++(int x);
	complex operator=(complex b);
	complex operator,(complex b);
	complex& operator[](int index);
	friend ostream& operator<<(ostream& out, complex a);
	friend istream& operator >> (istream& cin, complex &a);
	complex operator->();
};
complex complex::operator+(complex a)
{
	complex res;
	res.real = a.real + real;
	res.imag = a.imag + imag;
	return res;
}
complex complex::operator-(complex a)
{
	complex res;
	res.real = a.real - real;
	res.imag = a.imag - imag;
	return res;
}
complex complex::operator-()
{
	return complex(-real, -imag);
}
complex complex::operator++()
{
	complex res;
	res.real = ++real;
	res.imag = ++imag;
	return res;
}
complex complex::operator++(int x)
{
	complex res;
	res.real = real;
	res.imag = imag;
	real++;
	imag++;
	return res;
}
complex complex::operator=(complex b)
{
	real = b.real;
	imag = b.imag;
	return *this;
}
complex complex::operator,(complex b)
{
	return b;
}
complex& complex::operator[](int index)
{
	return *this;
}
ostream& operator<<(ostream& out, complex a)
{
	out << "real = " << a.real << endl;
	out << "imaginary value = " << a.imag << endl;
	return out;
}
istream& operator >> (istream& cin, complex &a)
{
	cin >> a.real >> a.imag;
	return cin;
}
complex complex::operator->()
{
	return *this;
}
int main()
{
	complex samp, arr[3], a1, a2, a3, a4, *ptr;
	cout << "\n enter 3 complex numbers:";
	for (int i = 0; i<3; i++)
	{
		cin >> arr[i];
	}
	cout << "\nThe 3 complex numbers are:\n";
	for (int i = 0; i<3; i++)
		cout << arr[i];
	ptr = &arr[0];
	a1 = arr[0] + arr[1];
	a2 = -arr[1];
	a3 = arr[0];
	a4 = ++arr[1];
	cout << endl;
	cout << "\npre increment of 2nd complex no:\n";
	cout << a4 << endl;
	cout << "\nThis pointer of 1st:\n";
	cout << a3 << endl << endl;
	samp = (a1, a2, a3);
	cout << samp << endl;
	for (int i = 0; i<3; i++)
		cout << arr[i];
	cout << ptr->real << endl;
	system("pause");
	return 0;
}