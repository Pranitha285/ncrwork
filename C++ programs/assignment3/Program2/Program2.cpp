#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10
template <class X>
class stack
{
	X *arr;
	int top;
	int capacity;

public:
	stack(int size = SIZE);	

	void push(X);
	X pop();
	X peek();

	int size();
	bool isEmpty();
	bool isFull();
};
template <class X>
stack<X>::stack(int size)
{
	arr = new X[size];
	capacity = size;
	top = -1;
}
template <class X>
void stack<X>::push(X x)
{
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << x << endl;
	arr[++top] = x;
}
template <class X>
X stack<X>::pop()
{
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << peek() << endl;
	return arr[top--];
}
template <class X>
X stack<X>::peek()
{
	if (!isEmpty())
		return arr[top];
	else
		exit(EXIT_FAILURE);
}
template <class X>
int stack<X>::size()
{
	return top + 1;
}
template <class X>
bool stack<X>::isEmpty()
{
	return top == -1;	
}
template <class X>
bool stack<X>::isFull()
{
	return top == capacity - 1;	
}
int main()
{
	stack<char*> pt(2);
	pt.push("ghu");
	pt.push("cgdp");

	pt.pop();
	pt.pop();
	pt.push("gkgkj");
	cout << "Top element is: "<< pt.peek() << endl;
	cout << "Stack size is " << pt.size() << endl;

	pt.pop();
	if (pt.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";
	stack<int> pt2;
	pt2.push(8);
	pt2.push(9);

	pt2.pop();
	pt2.pop();
	pt2.push(0);
	cout << "Top element is: " << pt2.peek() << endl;
	cout << "Stack size is " << pt2.size() << endl;

	pt2.pop();
	if (pt2.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";
	stack<float> pt3;
	pt3.push(5.9);
	pt3.push(9.2);

	pt3.pop();
	pt3.pop();
	pt3.push(2.90);
	cout << "Top element is: " << pt3.peek() << endl;
	cout << "Stack size is " << pt3.size() << endl;

	pt3.pop();
	if (pt3.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";
	system("pause");
	return 0;
}