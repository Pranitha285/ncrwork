#include<iostream>
using namespace std;
class polar
{
	int angle;
	int radius;
	static int count;
public:
	void get()
	{
		cout << "enter radius and angle of the point:";
		cin >> radius >> angle;
		count++;
	}
	void display()
	{
		cout << "\npoint details:";
		cout << "\nangle==" << angle << "\nradius==" << radius;
	}
	void countofobj()
	{
		cout << "\ncount==" << count;
	}
};
int polar::count = 0;
int main()
{
	polar p1, p2, p3;
	p1.get();
	p1.display();
	p2.get();
	p2.display();
	p3.get();
	p3.display();
	p1.countofobj();
	system("pause");
	return 0;
}