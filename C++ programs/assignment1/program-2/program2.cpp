#include<iostream>
using namespace std;
class collegecourse; 
class student
{
	char studentname[20];
	int grade;
	int m1, m2, m3;
public:
	void set_Data(char name[20], int m1, int m2,int m3)
	{
		
		int i = 0;
		for(i=0;i<strlen(name);i++)
		this->studentname[i] = name[i];
		studentname[i] = '\0';
		this->m1 = m1;
		this->m2 = m2;
		this->m3 = m3;
	}
	int calculateAverage()
	{  int avg=(m1 + m2 + m3) / 3;
	return avg;
	}
	void computegrade(int avg)
	{
		if (avg >= 60)
			grade = 1;
		else if (avg>50 && avg < 60)
			grade = 2;
		else if (avg >40 && avg < 50)
			grade = 3;
		else if (avg<=40)
			grade = 0;
	}
	void display()
	{
		cout << "\nstudent name:" << studentname;
		cout << "\ngrade:" << grade;
		cout << "\nmarks:\nm1==" << m1 << "\nm2==" << m2 << "\nm3==" << m3;
	}
};
int main()
{
	student s;
	char name[20];
	int avg, m1, m2, m3;
	cout << "\nenter student details:  name and marks for 3 subjects out of 100:";
	cin >> name >> m1>>m2>>m3;
	s.set_Data(name, m1, m2, m3);
	avg = s.calculateAverage();
	s.computegrade(avg);
	s.display();
	system("pause");
	return 0;
}