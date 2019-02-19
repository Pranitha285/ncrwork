#include<iostream>
using namespace std;
class Distance2;
class Distance1
{
	double m ,cm;
public:
	void Distance1::get()
	{
		cout << "enter distance in m and cm:";
		cin >> m >> cm;
	}
	void Distance1::display()
	{
		cout << "\n" << m << "m   and  " << cm << "cm\n";
	}
	friend Distance1 add1(Distance1 d1, Distance2 d2);
	friend Distance2 add2(Distance1 d1, Distance2 d2);
};
class Distance2{
	double feet, inch;
public:
	void Distance2::get()
	{
		cout << "enter distance in feet and inch:";
		cin >> feet >> inch;
	}
	void Distance2::display()
	{
		cout << "\n" << feet << "feets   and  " << inch << "inches\n";
	}
	friend Distance1 add1(Distance1 d1, Distance2 d2);
	friend Distance2 add2(Distance1 d1, Distance2 d2);
};
Distance1 add1(Distance1 d1, Distance2 d2)
{
	Distance1 d3;
	d3.m = d1.m+(d2.feet*0.3048);
	d3.cm = d1.cm+(d2.inch*2.54);
	return d3;
}
Distance2 add2(Distance1 d1, Distance2 d2)
{
	Distance2 d4;
	d4.feet = d2.feet +( d1.m * 3.28084);
	d4.inch = d2.inch + (d1.cm *0.393701);
		return d4;
}
int main()
{
	int ch;
	Distance1 d1,d3;
	Distance2 d2,d4;
	d1.get();
	d2.get(); d1.display();
	d2.display();
	cout << "\nenter 1 for answer in m and cm\n enter 2 for answer in feet and inches:";
	cin >> ch;
	if (ch == 1)
	{
		d3=add1(d1, d2);
		d3.display();
	}
	else if (ch == 2)
	{
		d4=add2(d1, d2);
		d4.display();
	}
	system("pause");
	return 0;
}