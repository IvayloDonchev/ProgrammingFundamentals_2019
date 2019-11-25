#include <iostream>
#include <string> 
#include <algorithm>

using namespace std;

class Human
{
private:
	int ID;
	string name, address;
public:
	void show() const{
		cout << "ID: " << ID << ", Name: " << name << ", Address: " << address;
	}
	Human(int i = -1, string n = "Name", string a = "Address") : 
		ID(i), name(n), address(a)
	{}
};

class Student : public Human
{
	int mark;
public:
	Student(int m = 0, int i = -1, string n = "Name", string a = "Address") :
		Human(i, n, a), mark(m)
	{}
	void show() const {
		Human::show();		// Shows inherited components
		cout << ", Mark: " << mark << endl;
	}
	int getMark() const {
		return mark;
	}
};

class Worker :public Human {
private:
	float wage;
	int hoursWorked;
public:
	Worker(float w = 0, int h = 0, int i = -1, string n = "Name", string a = "Address") :
		Human(i,n,a), wage(w), hoursWorked(h)
	{}
	
	float money() const {
		return wage / hoursWorked;
	}

	void show() {
		Human::show();		// Shows inherited components
		cout << ", Wage: " << wage << ",\t hours worked: " << hoursWorked 
			 << ",\t $/Hour: " << money() << endl;
	}
};

int main() {

	Student tabs[10] = { Student{5, 1, "Viktoria", "Bulgaria"},
	{5, 2, "Mia", "Croatia"},
	{3, 3, "Ida", "Denmark"},
	{2, 4, "Sofia", "Estonia"},
	{4, 5, "Sofia", "Finland"},
	{5, 6, "Emma", "France"},
	{4, 7, "Mariami", "Georgia"},
	{3, 8, "Mia", "Germany"},
	{5, 9, "Maria", "Greece"},
	{2, 10, "Ivaana", "Greenland"},
	};

	std::stable_sort(begin(tabs), end(tabs), [](const Student& a, const Student& b) {
		return a.getMark() < b.getMark(); });
	cout << "Array of 10 students sorted by mark in ascending order." << endl;
	for (int i = 0; i < 10; i++) {
		tabs[i].show();
	}

	Worker tab[10] = { Worker(543, 9, 1, "Antoni", "Poland"),
	{231, 12, 2, "Andrei", "Romania"},
	{765, 23, 3, "Sergei", "Moscow"},
	{1321, 21, 4, "Jack", "Scotland"},
	{524, 6, 5, "Dragan", "Serbia"},
	{968, 9, 6, "Jakub", "Slovakia"},
	{1212, 21, 7, "Luka", "Slovenia"},
	{4211, 53, 8, "Hugo", "Spain"},
	{373, 13, 9, "Oscar", "Sweden"},
	{7531, 23, 10, "Noah", "Switzerland"},
	};

	std::stable_sort(begin(tab), end(tab), [](const Worker& a, const Worker& b) {
		return a.money() > b.money(); });
	cout << endl << endl << "\t\t -------------------------------------------" << endl << endl;
	cout << "Array of 10 workers sorted by money per hour in descending order." << endl;
	for (int i = 0; i < 10; i++) {
		tab[i].show();
	}
}
//1. Define a class Human with fields " ID", " name" and "address".
//2. Define the class Student inheriting Human, which has the field " mark".
//3. Define the class Worker inheriting Human with the field " wage" and " hours worked".
//4. Implement a " calculate hourly wage" method, which calculates a worker’s hourly pay rate based on wage and hours worked.
//5. Write the corresponding constructors and encapsulate all data in fields.
//6. Initialize an array of 10 students and sort them by mark in ascending order.
//7. Initialize an array of 10 workers and sort them by salary in descending order.

