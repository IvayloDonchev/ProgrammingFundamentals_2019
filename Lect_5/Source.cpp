#include<iostream>
using namespace std;

int main()
{
	const int n = 10;
	int min = INT_MAX;	//���-�������� ����� �� ��� int
	int max = INT_MIN;	//���-������� ����� �� ��� int
	int x;
	for (int i = 1; i <= n; i++)
	{
		cout << "Enter a number: ";
		cin >> x;
		if (x < min) min = x;
		if (x > max) max = x;
	}
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;
} 



