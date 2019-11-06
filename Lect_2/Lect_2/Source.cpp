#define _USE_MATH_DEFINES		// за константата M_PI
#include <cmath>				// за sin, cos, tan
#include <iostream>
using namespace std;

int main()
{
	double a, b;	//операнди
	char op;		//знак за операция
	cout << ">> ";
	cin >> a >> op >> b;
	switch (op)
	{
		case '+': cout << a + b; break;
		case '-': cout << a - b; break;
		case '*': cout << a * b; break;
		case '/': if (b != 0) cout << a / b;
				  else cout << "Division by zero!";
				  break;
		case '^': cout << pow(a, b); break;
		default: cout << "Unknown operation";
	}
	cout << endl;
}

