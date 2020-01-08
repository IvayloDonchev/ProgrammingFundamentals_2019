#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include<iostream>
using namespace std;

const int m = 3, n = 4;

void read_matrix(int A[m][n])	// въвеждане на елементите на матрицата от клавиатурата
{	
	for(int i=0; i<m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		}
}

void show_rows(int A[m][n])	// извеждане по редове
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << A[i][j] << '\t';
		cout << endl;
	}
}

void show_columns(int A[m][n])	// извеждане по стълбове
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
			cout << A[i][j] << '\t';
		cout << endl;
	}
}

int* max(int A[m][n])	// връща указател към най-големия елемент
{
	int* p = &A[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (A[i][j] > *p)
				p = &A[i][j];
	return p;
}

pair<int,int> max_row_col(int A[m][n])	// реда и колоната на максимума
{
	int r = 0, c = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (A[i][j] > A[r][c])
				r = i, c = j;
	++r; ++c;
	return make_pair(r, c);
}

int min(int A[m][n])	// намира най-малкия елемент
{
	int t = A[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (A[i][j] < t)
				t = A[i][j];
	return t;
}

int sum(int A[m][n])
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			s += A[i][j];
	return s;
}

int row_max_sum(int A[m][n])
{
	int max_row = 0;
	int max_sum = INT_MIN;
	for (int i = 0; i < m; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
			sum += A[i][j];
		if (sum > max_sum)
			max_sum = sum, max_row = i;
	}
	return max_row + 1;
}

void sum_matrix(int A[m][n], int B[m][n], int C[m][n])
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			C[i][j] = A[i][j] + B[i][j];
}

char* my_strcpy(char* dest, const char* source)
{
	while (*dest++ = *source++);
	return dest;
}

int main()
{
	char s[10]="+1234";
	int x;
	x = atoi(s);
	cout << x << endl;

	/*char s1[35] = "Happy";
	char s2[20] = "Birthday!";
	strcat(s1, s2);
	cout << s1 << endl;
	cout << strcat(s1, s2) << endl;
	char s3[35] = "";
	strncat(s3, s1, 14);
	cout << s3 << endl;
	strcat(s3, ", Ivaylo");
	cout << s3 << endl;*/

	/*char s1[] = "Ivaylo";
	char s2[] = "Ivaylo Donchev";
	const char* s3 = "Ivaylo";
	cout << strcmp(s1, s2) << endl;
	cout << strcmp(s1, s3) << endl;
	cout << strcmp(s2, s1) << endl;
	cout << strncmp(s1, s2, 6) << endl;
	if (!strcmp(s1, s3))
		cout << "OK\n";*/

	/*char name[] = { 'I','v','a','y','l','o',' ','D','o','n','c','h','e','v','\0' };
	cout << name << endl;
	const char* address = "Veliko Turnovo";
	char* p = const_cast<char*>(address);*/

	/*char *name;
	char message[10];
	cout << "Your name: ";
	name = new char[25];
	cin >> name;
	cout << my_strcpy(message,"Hello");
	cout << message << ", " << name << endl;
	for (size_t i = 0; i < strlen(name); i++)
		cout << name[i] << ' ';
	cout << endl;
	delete[] name;*/


	//int m, n;
	//cout << "m = "; cin >> m;
	//cout << "n = "; cin >> n;
	//int** A;	// указател към указател към int
	//A = new int* [m]; // m на брой int*
	//for (int i = 0; i < m; i++)
	//	A[i] = new int[n];
	//// въвеждане на елементите
	//for(int i=0; i<m; i++)
	//	for (int j = 0; j < n; j++)
	//	{
	//		cout << "A[" << i << "][" << j << "] = ";
	//		cin >> A[i][j];
	//	}
	//// извеждане по редове
	//for (int i = 0; i < m; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//		cout << A[i][j] << '\t';
	//	cout << endl;
	//}
	//// освобождаване на паметта
	//for (int i = 0; i < m; i++)
	//	delete[] A[i];
	//delete[] A;

	//int(*p)[4] = new int[3][4]; // заделяне на памет за матрицата
	//for (int i = 0; i < 3; i++)
	//	for (int j = 0; j < 4; j++)
	//		p[i][j] = rand() % 100;
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//		cout << p[i][j] << '\t';
	//	cout << endl;
	//}
	//cout << endl;
	//delete[] p;	// освобождава заделената памет;


	/*int matr[m][n];
	read_matrix(matr);
	show_rows(matr);
	cout << "------------------------------\n";
	show_columns(matr);
	cout << "------------------------------\n";
	cout << "max = " << *max(matr) << endl;
	cout << "min = " << min(matr) << endl;
	auto mrc = max_row_col(matr);
	cout << "maximum at row " << mrc.first << " and column " << mrc.second << endl;
	cout << "sum = " << sum(matr) << endl;
	*max(matr) = 100;
	cout << "------------------------------\n";
	show_rows(matr);
	cout << "------------------------------\n";
	cout << "maxrow = " << row_max_sum(matr) << endl;*/
}