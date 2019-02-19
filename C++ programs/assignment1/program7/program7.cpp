#include<iostream>

using namespace std;
class vector;
class matrix
{
	int m[3][3];
public:
	void getmatrix(void);
	void dismatrix(void);
	friend void multiply(matrix &, vector &);
};
class vector
{
	int v[10];
public:
	void getvector(int n = 3);
	void disvector(void);
	friend void multiply(matrix &, vector &);
};
void vector::getvector(int n)
{
	int i;

	cout << "\nEnter elements for vector one by one…\n";

	for (i = 0; i<n; i++)

		cin >> v[i];

}

void vector::disvector()

{

	int i;

	cout << "\nThe vector elements are…\n";

	for (i = 0; i<3; i++)

		cout << v[i] << "\t";

}

void matrix::getmatrix()

{

	int i, j;

	cout << "\nEnter the matrix…\n";

	for (i = 0; i<3; i++)

		for (j = 0; j<3; j++)

			cin >> m[i][j];

}

void matrix::dismatrix()

{

	int i, j;

	cout << "\nEntered matrix is…\n";

	for (i = 0; i<3; i++)

	{

		for (j = 0; j<3; j++)

			cout << m[i][j] << "\t";

		cout << "\n";

	}

}

void multiply(matrix &m1, vector &v1)

{

	int ans[3], i, j;

	cout << "\nThe resultant matrix…\n";

	for (i = 0; i<3; i++)

	{

		ans[i] = 0;

		for (j = 0; j<3; j++)

			ans[i] += m1.m[i][j] * v1.v[j];

		cout << ans[i] << "\t";

	}

}

void main()

{

	matrix m1;

	vector v1;

	m1.getmatrix();

	m1.dismatrix();

	v1.getvector(); 

	v1.disvector();

	multiply(m1, v1);

	system("pause");

}