#include<stdio.h>

long double power(long double ans, long int exponent)

{

	long double res = 1;

	for (long int i = 1; i <= exponent; i++)

		res *= ans;

	return res;

}

int main()

{

	long double rate=2 ;

	long int amount =500000;

	long int year=10;

	printf("Simple Interest is:  ");

	long double simple_interest = ((long double)amount*year*rate / 100);

	printf("%Lf\n", simple_interest);

	long double compound_interest;

	printf("Compound Interest when done annually is:  ");

	compound_interest = ((power((1 + rate / 100.0), year)*amount) - amount);

	printf("%Lf\n", compound_interest);

	printf("Compound Interest when done semi-annually is:  ");

	compound_interest = ((power((1 + rate / 200.0), 2 * year)*amount) -amount);

	printf("%Lf\n", compound_interest);

	printf("Compound Interest when done quarterly is:  ");

	compound_interest = ((power((1 + rate / 400.0), 4 * year)*amount) - amount);

	printf("%Lf\n", compound_interest);

	printf("Compound Interest when done monthly is:  ");

	compound_interest = ((power((1 + rate / 1200.0), 12 * year)*amount) -amount);

	printf("%Lf\n", compound_interest);

	printf("Compound Interest when done daily is:  ");

	compound_interest = ((power((1 + rate / 36500.0), 365 * year)*amount) - amount);

	printf("%Lf\n", compound_interest);

	system("pause");

	return 0;
}