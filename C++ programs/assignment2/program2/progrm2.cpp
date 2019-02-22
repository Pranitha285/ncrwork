#include<iostream>
using namespace std;
class student
{
	char name[30];
	int rollno;
	int marks[3];
	int total;
	char grade;
public:
	friend istream& operator>>(istream&cin, student &s);
	friend void generate_results(student s[]);
	friend ostream& operator<<(ostream &cout, student s);
};
istream& operator>>(istream& cin, student &s)
{
	cout << "enter student name,rollno and marks of 3 subjects";
	cin >> s.name;
	cin >> s.rollno;
	for (int i = 0; i<3; i++)
		cin >> s.marks[i];
	return cin;
}
void generate_results(student s[])
{
	for (int i = 0; i < 3; i++)
	{
		s[i].total = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
		int avg = s[i].total / 3;
		if (avg > 60)s[i].grade = 'A';
		else if (avg > 50 && avg < 60)s[i].grade = 'B';
		else if (avg > 40 && avg < 50)s[i].grade = 'C';
		else if (avg < 40)s[i].grade = 'F';
	}
}
ostream& operator<<(ostream& cout, student s)
{ 
	cout << "\nstudent details:\n";
	cout << "\n Name:" << s.name;
	cout << "\nroll no:" << s.rollno;
	cout << "\nMarks:\n";
	for (int i = 0; i < 3; i++)
		cout << "\n" << s.marks[i];
	cout << "\nTotal:" << s.total;
	cout << "\ngrade:" << s.grade;
	return cout;
}
int main()
{
	student s[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> s[i];
		
	}
	generate_results(s);
	cout << s[0] << endl;
	cout << s[1] << endl;
	cout << s[2] << endl;
	system("pause");
	return 0;

}