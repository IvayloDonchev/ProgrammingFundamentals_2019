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

enum Animal {Eagle, Snake, Mouse};

size_t eagles{ 6 }, snakes{ 17 }, mouses{ 55 };

void Show()
{
	cout << "Eagles: " << eagles << endl;
	cout << "Snakes: " << snakes << endl;
	cout << "Mouses: " << mouses << endl << endl;
}

bool Eats(Animal predator, Animal victim)
{
	if (predator == Eagle && eagles > 0)		// �������� � ����
	{
		if (victim == Snake && snakes > 0)		// ������ �� ��� ����
		{
			--eagles;							// ��������� ������
			--snakes;							// ��������� ������
			++mouses;							// ���������� �� ������� (������ ����� �����)
			return true;
		}
		if (victim == Mouse && mouses > 0)		// ������ �� ��� �����
		{
			--eagles;
			--mouses;
			++snakes;							// ������ ����� ����
			return true;
		}
		return false;
	}
	if (predator == Snake && snakes > 0 && mouses > 0)
	{		// �������� � ���� � ��� ���� �����
			--snakes;
			--mouses;
			++eagles;		// ������ ����� ����
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
			++count;
			Show();
		}
	} while (eagles + snakes + mouses > 1);
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

