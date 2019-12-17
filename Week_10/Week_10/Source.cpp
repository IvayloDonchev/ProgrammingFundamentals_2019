#include<iostream>
using namespace std;

double power( double x,  int n)
{
	double res = 1.0;
	for (int i = 1; i <= n; i++)
		res *= x;
	return res;
}

void foo(int& x)
{
	x += 2;
	cout << "x = " << x << endl;
}

void my_swap(int* x, int* y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

int sum(int mas[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s += mas[i];
	return s;
}

int main()
{
	int A[]{ 4,6,78,3,1,3,5,7,4,2 };
	int n = sizeof(A) / sizeof(A[0]);	// брой на елементите на масива
	cout << sum(A, n) << endl;;

	cout << "n = "; cin >> n;
	int* p = new int[n];	// динамичен масив от n цели числа
	for (int i = 0; i < n; i++)
	{
		p[i] = rand() % 100 + 1;
		cout << p[i] << ' ';
	}
	cout << "\nsum(p) = " << sum(p, n) << endl;
	delete[] p;
}