#include <iostream>
#include <string>
using namespace std;

template<typename T>
T mult(T a, T b)
{
	return a * b;
}

template<typename T1, typename T2>
auto mult(T1 a, T2 b)
{
	return a * b;
}

template<typename T, int N>
class Stack
{
public:
	bool Push(T x);
	bool Pop(T& x);
	Stack();
private:
	T buf[N];
	int sp;
};

template<typename T, int N>
Stack<T, N>::Stack()
{
	sp = -1;
}

template<typename T, int N>
bool Stack<T, N>::Push(T x)
{
	if (sp >= N - 1) return false;
	buf[++sp] = x;
	return true;
}

template<typename T, int N>
bool Stack<T, N>::Pop(T& x)
{
	if(sp<0) return false;
	x = buf[sp--];
	return true;
}

int main()
{
	Stack<int, 10> st;
	for (int i = 1; i <= 100; i++)
		if(!st.Push(i))
			cout << "The stack is full...\n";
	int k;
	if(st.Pop(k))
		cout << "k = " << k << endl;
	if (st.Pop(k))
		cout << "k = " << k << endl;
	if (st.Pop(k))
		cout << "k = " << k << endl;
	if (st.Pop(k))
		cout << "k = " << k << endl;

	Stack<double, 20> dblStack;
	dblStack.Push(2.5);
	dblStack.Push(1.25);
	double d;
	dblStack.Pop(d);
	cout << "d = " << d << endl;

	Stack<string, 3> s;
	s.Push("Ivan");
	s.Push("Stoyan");
	s.Push("Gergana");
	s.Push("Stefka");
	string name;
	while (s.Pop(name))
		cout << name << " ";
	cout << endl;
} 





