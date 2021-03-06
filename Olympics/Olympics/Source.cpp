/*
� �������� �� �������� ������ 6 ����, 17 ���� � 55 �����.
������ ���� ����� � ����, ������ ���� �����, � ������� ���� �� ����.
��� ���� ����� �����, �������� �� � ����; ��� ����� ���� - �������� �� � �����.
��� ������ ����� �����, �� �������� � ����.
���� �������� ����� �������� ������� ���� �� ���� ���.
�� ����� ��� �� � ���-����� ����� ���� �� �� ��?
*/
#include <iostream>
#include <ctime>
using namespace std;

enum class Animal {Eagle, Snake, Mouse};

size_t eagles{ 6 }, snakes{ 17 }, mouses{ 55 };

void Show()
{
	cout << "Eagles: " << eagles << '\t'
	     << "Snakes: " << snakes << '\t'
	     << "Mouses: " << mouses << endl << endl;
}

bool Eats(Animal predator, Animal victim)
{
	if (predator == Animal::Eagle && eagles > 0)		// �������� � ����
	{
		if (victim == Animal::Snake && snakes > 0)		// ������ �� ��� ����
		{
			--eagles;							// ��������� ������
			--snakes;							// ��������� ������
			++mouses;							// ���������� �� ������� (������ ����� �����)
			cout << "Eagle eats snake...\t";
			return true;
		}
		if (victim == Animal::Mouse && mouses > 0)		// ������ �� ��� �����
		{
			--eagles;
			--mouses;
			++snakes;							// ������ ����� ����
			cout << "Eagle eats mouse...\t";
			return true;
		}
		return false;
	}
	if (predator == Animal::Snake && snakes > 0 && mouses > 0)
	{		// �������� � ���� � ��� ���� �����
			--snakes;
			--mouses;
			++eagles;		// ������ ����� ����
			cout << "Snake eats mouse...\t";
			return true;
	}
	return false;
}

int main()
{
	srand(unsigned(time(nullptr)));
	Show();
	size_t count{ 0 };
	do {
		auto predator = Animal(rand() % 2);
		auto victim = Animal(1 + rand() % 2);
		if (Eats(predator, victim))
		{
			cout << '(' << ++count << ") ";
			Show();
		}
	} while ((eagles+snakes != 0) && (eagles+mouses!=0) && (snakes+mouses!=0));
	cout << count << " eatings\n";
}

/*
������ ���� ������� �� ���� �����:
23 0 38
���� ������ �����:
22 1 37
������������ ���� ������ �����:
23 0 36
���� ������ �����:
22 1 35
������������ ���� ������ �����:
23 0 34
........................................
23 0 2
22 1 1
23 0 0 - ���������� ����
*/

