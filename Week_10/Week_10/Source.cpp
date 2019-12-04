#include<iostream>
using namespace std;

int sum(int, int);	// декларация на функция
void show_message(const char*);
double power(double, int);
int max(int, int);

int main()
{
	cout << sum(4, 5) << endl;
	show_message("Hello!");
	cout << power(2, 10) << endl;
	cout << max(3, 4) << endl;

}

int sum(int a, int b)
{
	return a + b;
}

double power(double x, int n)		// заглавна част
{									// от тук започва тялото
	double p{ 1.0 };
	for (int i = 1; i <= n; i++)
		p *= x;
	return p;						// връща резултат
}

void show_message(const char* s)
{
	cout << s << endl; 
}

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}


