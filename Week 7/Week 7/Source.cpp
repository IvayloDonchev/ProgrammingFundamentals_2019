#include <iostream>
#include <ctime>
#include <vector>
#include "functions.h"
using namespace std;

int main()
{
	//const int n{ 10 };	// ���� �� ���������� �� ������
	//int mas[n];
	//// ��������� �� ��������� �� ����������
	//for (int i = 0; i < n; i++)
	//{
	//	cout << "mas[" << i << "] = ";
	//	cin >> mas[i];
	//}
	//// ��������� �� ���� ���, ��������� � ���������
	//for (int i = 0; i < n; i++)
	//{
	//	cout << mas[i] << ' ';
	//}
	//cout << endl;
	//for (auto x : mas)	// �������� for �� �������� (range-based for)
	//	cout << x << ' ';
	//cout << endl << endl;
	//// ��������� � ������� ���
	//for (int i = n - 1; i >= 0; i--)
	//	cout << mas[i] << ' ';
	//cout << endl;
	//// ������ �����������
	//double s{ 0.0 };
	//for (int i = 0; i < n; i++)
	//	s += mas[i];
	//cout << "Average = " << s / n << endl << endl;
	//// �������� �� ��������� � ���������� �������
	//int min{ INT_MAX }, max{ INT_MIN };
	//for (int i = 0; i < n; i++)
	//{
	//	if (mas[i] < min) min = mas[i];
	//	if (mas[i] > max) max = mas[i];
	//}
	//cout << "min = " << min << endl;
	//cout << "max = " << max << endl;
	////��������� �� m �� ���
	//int m, j{ 0 };
	//cout << "m = "; cin >> m;
	//for (int i = 0; i < n; i++)
	//{
	//	cout << mas[i] << ' ';
	//	j++;
	//	if (j == m)
	//	{
	//		cout << endl;
	//		j = 0;
	//	}
	//}
	//cout << endl;

	//const int n = 100;
	//int mas[n];
	//srand((unsigned)time(nullptr)); // ������������ ���������� �� �������������� �����
	//for (int i = 0; i < n; i++)
	//{
	//	mas[i] = rand() % 200 + 1;
	//	cout << mas[i] << ' ';
	//}
	//cout << endl;
	//// �������� �� ��������� � ���������� �������
	//int min{ INT_MAX }, max{ INT_MIN };
	//for (int i = 0; i < n; i++)
	//{
	//	if (mas[i] < min) min = mas[i];
	//	if (mas[i] > max) max = mas[i];
	//}
	//cout << "min = " << min << endl;
	//cout << "max = " << max << endl;

	//const int n = 20;
	//int mas[n];
	//srand((unsigned)time(nullptr)); // ������������ ���������� �� �������������� �����
	//for (int i = 0; i < n; i++)
	//{
	//	mas[i] = rand() % 101 + 50;
	//	cout << mas[i] << ' ';
	//}
	//cout << endl;
	//int k{ 0 };	// �����
	//vector<int> A;	// ����� � ������� > 100
	//for (int i = 0; i < n; i++)
	//	if (mas[i] > 100)
	//	{
	//		cout << mas[i] << ' ';
	//		A.push_back(mas[i]);
	//	}
	//
	//for (auto x : A)
	//	cout << x << ' ';
	//cout << endl;
	//cout << A.size() << endl;
	int n = 100000000;	// ���� �����
	srand((unsigned)time(nullptr));
	int digit[10]{ 0 };		// ����� �� 10 ������
	for (int i = 1; i <= n; i++)
		digit[rand() % 10]++;
	// ��������� �� �����������
	for (int i = 0; i < 10; i++)
		cout << i << '\t' << double(digit[i]) / n * 100 << " % \n";

	for (int i = 1; i <= 10; i++)
		cout << fact(i) << endl;
	cout << endl;
}
