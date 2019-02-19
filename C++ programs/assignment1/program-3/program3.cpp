#include<iostream>
using namespace std;
class complex
{
	int imaginary;
	int real;
public:
	complex()
	{
		imaginary = 0;
		real = 0;
	}
	complex(int a)
	{
		imaginary = real = a;
	}
	complex(int a, int b)
	{
		imaginary = a;
		real = b;
	}
	void complex::display()
	{
		cout << "\n" << real << "+" << imaginary << "i";
	}
	friend complex add(complex, complex);
	friend complex mul(complex, complex);
};
complex mul(complex c1, complex c2)
{
	complex c;
	c.imaginary = c1.imaginary*c2.imaginary;
	c.real = c1.real*c2.real;
	return c;
}
complex add(complex c1, complex c2)
{
	complex c;
	c.imaginary = c1.imaginary+c2.imaginary;
	c.real = c1.real+c2.real;
	return c;
}
int main()
{
	int a, b;
	cout << "enter a value:";
	cin >> a;
	complex c1(a);
	cout << "enter 2 values:";
	cin >> a >> b;
	complex c2(a, b);
	complex c3, c4;
	cout << " the 2 complex numbers are:";
	c1.display();
	c2.display();
	c3 = add(c1, c2);
	c4=mul(c1, c2);
	cout << "\n after addition::";
	c3.display();
	cout << "\nafter multiplication::";
	c4.display();
	system("pause");
	return 0;
}