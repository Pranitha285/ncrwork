#include<iostream>
#include<math.h>
using namespace std;
class point
{
	int x, y;
public:
	void get()
	{
		cout << "\nenter x and y cordinates:";
		cin >> x >> y;
	}
	void display()
	{
		cout << "\nCordinates are:(";
		cout << x << "," << y;
		cout<<")";
	}
	friend void distance(point p1, point p2);
};
void distance(point p1, point p2)
{
	float dis;
	dis = pow((p1.x - p2.x), 2) + pow((p1.y - p2.y) , 2);
	cout << "\nDistance ===" << sqrt(dis);
}
int main()
{
	point p1, p2;
	p1.get();
	p2.get();
	p1.display();
	p2.display();
	distance(p1, p2);
	system("pause");
	return 0;
}