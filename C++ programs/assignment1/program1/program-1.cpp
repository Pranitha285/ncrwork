#include<iostream>
using namespace std;
class time
{
	int hours;
	int minutes;
	int seconds;
public:
	time()
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}
	time(int a, int b, int c)
	{
		hours = a;
		minutes = b;
		seconds = c;
	}
	void time::add(time t1, time t2)
	{
		seconds = t1.seconds + t2.seconds;
		minutes = seconds / 60;
		seconds = seconds % 60;
		minutes = minutes + t1.minutes + t2.minutes;
		hours = minutes / 60;
		minutes = minutes % 60;
		hours = hours + t1.hours + t2.hours;
	}
	void time::display()
	{
		cout << "\n" << hours << ":" << minutes << ":" << seconds << "\n";
	}
};
int main()
{
	int a, b, c;
	cout << "enter object 1 details";
	cin >> a >> b >> c;
	time t1(a, b, c);
	cout << "enter object 2 details";
	cin >> a >> b >> c;
	time t2(a, b, c);
	time t3;
	t3.add(t1, t2);
	cout << "after adding t1 and t2";
	t3.display();
	system("pause");
	return 0;
}