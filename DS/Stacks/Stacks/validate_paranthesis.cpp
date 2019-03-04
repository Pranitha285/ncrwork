#include<iostream>
#include<stack>
using namespace std;

bool validateParenthesis(char s[])
{
	stack<char> stk;
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			stk.push(s[i]);
		else if (s[i] == ')')
		{
			if (!stk.empty() && stk.top() == '(')
				stk.pop();
			else return false;
		}
		else if (s[i] == '}')
		{
			if (!stk.empty() && stk.top() == '{')
				stk.pop();
			else return false;
		}
		else if (s[i] == ']')
		{
			if (!stk.empty() && stk.top() == '[')
				stk.pop();
			else return false;
		}
		i++;
	}
	if (stk.empty())
		return true;
	return false;
}
int main()
{
	char s[10];
	cout << "enter input:";
	cin >> s;
	if (validateParenthesis(s) == true)
		cout << "\nbalanced";
	else cout << "not balanced";
	system("pause");
	return 0;
}