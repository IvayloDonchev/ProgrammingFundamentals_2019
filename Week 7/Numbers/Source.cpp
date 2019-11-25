#include <iostream>
#include <ctime>

using namespace std;
int main()
{
	const int n = 10;
	double A[n];
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	bool flag = true;	// приемаме, че редицата е намаляваща
	for (int i = 1; i < n; i++)
	{
		if (A[i] > A[i - 1])	// не е намаляваща
		{
			flag = false;
			break;
		}
	}
	if (flag)
		cout << "OK" << endl;
	else
		cout << "Not OK" << endl;
}