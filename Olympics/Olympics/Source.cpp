#include <iostream>
using namespace std;

enum class Animal {Eagle, Snake, Mouse};

size_t eagles{ 6 }, snakes{ 17 }, mouses{ 55 };

void Show()
{
	cout << "Eagles: " << eagles << endl;
	cout << "Snakes: " << snakes << endl;
	cout << "Mouses: " << mouses << endl << endl;
}

bool Eats(Animal predator, Animal victim)
{
	if (predator == Animal::Eagle && eagles > 0)		// �������� � ����
	{
		if (victim == Animal::Snake && snakes > 0)		// ������ ��� ����
		{
			--eagles;						// ��������� ������
			--snakes;						// ��������� ������
			++mouses;						// ���������� �� ������� (������ ����� �����)
			return true;
		}
		if (victim == Animal::Mouse && mouses > 0)	// ������ ��� �����
		{
			--eagles;
			--mouses;
			++snakes;		// ������ ����� ����
			return true;
		}
		return false;
	}
	if (predator == Animal::Snake && snakes > 0)		// �������� � ����
	{
		if (mouses > 0)		// ������ ��� ���� �����
		{
			--snakes;
			--mouses;
			++eagles;		// ������ ����� ����
			return true;
		}
	}
	return false;
}

int main()
{
	Show();
	size_t count{ 0 };
	do {
		Animal p = Animal(rand() % 2);
		Animal v = Animal(1 + rand() % 2);
		if(Eats(p, v))
			++count;
		Show();
	} while (eagles+snakes+mouses > 1);
	cout << count << " eatings\n";
}
