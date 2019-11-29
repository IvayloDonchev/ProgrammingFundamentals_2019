// C++ program to illustrate the placement new operator 
#include<iostream> 
using namespace std;

int main()
{
	// buffer on stack 
	unsigned char buf[sizeof(double)+sizeof(int)];

	// placement new in buf 
	double* pDouble = new (buf+0) double(3.25);
	int* qInt = new (buf + sizeof(double)) int(5);

	double* pBuf = (double*)(buf + 0);
	int* qBuf = (int*)(buf + sizeof(double));
	cout << "Buff Addr			 Int Addr" << endl;
	cout << pBuf << "			 " << pDouble << endl;
	cout << qBuf << "			 " << qInt << endl;
	cout << "------------------------------" << endl;
	cout << "1st Number			 2nd Number" << endl;
	cout << *pBuf << "           "<< *qBuf << endl;

	//delete pBuf;	//Error! It's in the stack.

	return 0;
}
