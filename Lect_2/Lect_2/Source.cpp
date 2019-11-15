#define _USE_MATH_DEFINES		// за константата M_PI
#include <cmath>				// за sin, cos, tan
#include <iostream>
using namespace std;
const int n = 100;

int main()
{
	double temp[] { 21.5, 22.0, 22.5, 21.0, 17.25 };
	constexpr int N = sizeof(temp) / sizeof(double);	// пресмятане на размера на масива
	for (int i = 0; i < N; i++)
		cout << temp[i] << ' ';
	cout << endl;
	for (auto x : temp)
		cout << x << ' ';
	cout << endl;

	for (int i = 0; i < N; i++)
	{
		cout << "temp[" << i << "] = ";
		cin >> temp[i];
	}
	for (auto x : temp)
		cout << x << ' ';
	cout << endl;
	for (auto& x : temp)
	{
		static int i{ 0 };
		cout << i++ << ">> ";
		cin >> x;
	}
	for (auto x : temp)
		cout << x << ' ';
	cout << endl;

	/*cout << temp[0] << endl;
	double average = (temp[0] + temp[1] + temp[2]) / 3.0;
	swap(temp[2], temp[4]);
	cout << "&temp[0] = " << &temp[0] << endl;
	cout << "&temp[1] = " << &temp[1] << endl;
	cout << "&temp[2] = " << &temp[2] << endl;
	cout << reinterpret_cast<int>(&temp[2]) - reinterpret_cast<int>(&temp[1]) << endl;*/


}

