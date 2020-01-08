#include<iostream>
using namespace std;

void ReadArray(int A[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i << "] = ";
		cin >> A[i];
	}
}

void ShowArray(int A[], const int n)
{
	for (int i = 0; i < n; i++)
		cout << A[i] << ' ';
	cout << endl;
}

void ShowReverse(int A[], const int n)
{
	for(int i=n-1; i>=0; i--)
		cout << A[i] << ' ';
	cout << endl;
}

int min(int A[], const int n)
{
	int m = A[0];
	for (int i = 1; i < n; i++)
		if (A[i] < m)
			m = A[i];
	return m;
}

int max(int A[], const int n)
{
	int m = A[0];
	for (int i = 1; i < n; i++)
		if (A[i] > m)
			m = A[i];
	return m;
}

int& l_max(int A[], const int n)
{
	int m_index = 0;
	for (int i = 1; i < n; i++)
		if (A[i] > A[m_index])
			m_index = i;
	return A[m_index];
}

int sum(int A[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s += A[i];
	return s;
}

const int m{ 20 };	// максимален размер на масива
int n{ 0 };			// текущ брой елементи в масива

int locate(int A[], int x)
{
	int i,j;
	for (i = 0; (i < n) && (A[i] < x); i++);
	if (n < m)
	{
		if (A[i] > x)
			for (j = n++; j > i; j--)
				A[j] = A[j - 1];
		if (i >= n) ++n;
	}
	A[i] = x;
	return i;
}

int main()
{
	int mas[m];
	int x;
	do {
		cout << "x = "; cin >> x;
		cout << "The index of x is " << locate(mas, x) << endl;
		ShowArray(mas, n);

	} while (x != 0 && n < m);
	
	ShowArray(mas, n);
	
	
	/*l_max(mas, 10) = 400;
	ShowArray(mas, 10);*/
	/*int n;
	cout << "n =";
	cin >> n;

	int* p = new int[n];
	ReadArray(p, n);
	ShowArray(p, n);
	cout << "min = " << min(p, n) << endl;
	cout << "max = " << max(p, n) << endl;
	cout << "sum = " << sum(p, n) << endl;*/


}