#define _USE_MATH_DEFINES
#include<cmath>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	//string s1 = "This is a string";
	//string s2 { "This is a string" };
	//string s3("This is a string");
	//cout << "The lenght of '" << s1 << "' = " << s1.length() << endl;
	//cout << ">> ";
	//cin >> s2;
	//getline(cin, s3);	// въвежда низа до натискане на клавиша Enter
	//string s4;
	//if (s4.empty())
	//	cout << "The string is empty\n";

	//string s5(s1);	// инициализация на един низ чрез друг
	//string s6(s1, 10, 6);
	//cout << "s6 = " << s6 << endl;
	//string names[] = { "Ivan", "Petar", "Albena", "Gergana" };
	//for (auto n : names)
	//	cout << n << endl;

	//string s1{ "Ivaylo" };
	//string s2{ "Donchev" };
	//string s3;
	//s3 = s1 + " " + s2;	// конкатенация на низове
	//s3.insert(7, "Petrov ");
	//cout << s3 << endl;
	//const char* p = s3.c_str();
	//const_cast<char*>(p)[0] = 'i';
	//cout << s3 << endl;
	//s3[0] = 'I';
	//cout << s3 << endl;
	//
	//int n = s3.length();
	//for (int i = 0; i < n; i++)
	//	if (s3[i] >= 'a' && s3[i] <= 'z')
	//		cout << char(s3[i] - 'a' + 'A') << ' ';
	//	else
	//		cout << s3.at(i) << ' ';
	//cout << endl;
	//s3.replace(0, 6, "Georgi");
	//cout << s3 << endl;
	//string s4 = s3.substr(7, 6);
	//cout << s4 << endl;
	
	/*string s;
	cout << "Enter some text: ";
	getline(cin, s);
	cout << "Word to search for: ";
	string subs;
	cin >> subs;
	int n = s.find(subs);
	if (n != string::npos)
		cout << "Found at possition " << n << endl;
	else
		cout << subs << " not found\n";
	*/

	typedef double double_fn(double);
	double_fn* pf;
	pf = sin;
	cout << pf(M_PI_2);
	pf = tan;
	cout << pf(M_PI);







}
