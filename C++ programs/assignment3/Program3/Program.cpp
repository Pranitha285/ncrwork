#include<iostream>
using namespace std;
class Shape
{
public:
	virtual void display_area() {}
};
class Triangle :public Shape
{
	int height, base;
public:
	Triangle()
	{
		cout<< "\nenter triangle height and base:";
		cin >> height >> base;
	}
	void display_area()
	{
		cout << "\nArea of triangle:" << (0.5*height*base);
	}
};
class rectangle :public Shape
{
	int side1, side2;
public:
	rectangle()
	{
		cout << "\nenter 2 sides of rectangle:";
		cin >> side1 >> side2;
	}
	void display_area()
	{
		cout << "\nArea of rectangle:" << side1*side2;
	}
};
class Square :public Shape
{
	int side;
public:
	Square()
	{
		cout << "\nenter side of square:";
		cin >> side;
	}
	void display_area()
	{
		cout << "\nArea of square:" << side*side;
	}
};
int main()
{
	Square s;
	s.display_area();
	rectangle r;
	r.display_area();
	Triangle t;
	t.display_area();
	system("pause");
	return 0;
}