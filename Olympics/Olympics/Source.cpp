/*
В страната на чудесата живеят 6 орли, 17 змии и 55 мишки.
Орлите ядат мишки и змии, змиите ядат мишки, а мишките нищо не ядат.
Ако орел изяде мишка, превръща се в змия; ако изяде змия - превръща се в мишка.
Ако змията изяде мишка, се превръща в орел.
След известно време останали животни само от един вид.
От какъв вид са и най-много колко може да са те?
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
	if (predator == Eagle && eagles > 0)		// хищникът е орел
	{
		if (victim == Snake && snakes > 0)		// орелът ще яде змия
		{
			--eagles;							// намаляват орлите
			--snakes;							// намаляват змиите
			++mouses;							// увеличават се мишките (орелът става мишка)
			return true;
		}
		if (victim == Mouse && mouses > 0)		// орелът ще яде мишка
		{
			--eagles;
			--mouses;
			++snakes;							// орелът става змия
			return true;
		}
		return false;
	}
	if (predator == Snake && snakes > 0 && mouses > 0)
	{		// хищникът е змия и яде само мишки
			--snakes;
			--mouses;
			++eagles;		// змията става орел
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
Всички змии изяждат по една мишка:
23 0 38
Орел изяжда мишка:
22 1 37
Новородената змия изяжда мишка:
23 0 36
Орел изяжда мишка:
22 1 35
Новородената змия изяжда мишка:
23 0 34
........................................
23 0 2
22 1 1
23 0 0 - максимален брой
*/

