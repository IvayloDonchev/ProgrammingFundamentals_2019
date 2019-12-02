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
	if (predator == Animal::Eagle && eagles > 0)		// хищникът е орел
	{
		if (victim == Animal::Snake && snakes > 0)		// орелът яде змия
		{
			--eagles;						// намаляват орлите
			--snakes;						// намаляват змиите
			++mouses;						// увеличават се мишките (орелът става мишка)
			return true;
		}
		if (victim == Animal::Mouse && mouses > 0)	// орелът яде мишка
		{
			--eagles;
			--mouses;
			++snakes;		// орелът става змия
			return true;
		}
		return false;
	}
	if (predator == Animal::Snake && snakes > 0)		// хищникът е змия
	{
		if (mouses > 0)		// змията яде само мишки
		{
			--snakes;
			--mouses;
			++eagles;		// змията става орел
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
