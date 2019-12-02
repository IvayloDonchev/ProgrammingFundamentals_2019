#include <vector>
#include <iostream>
using namespace std;

class Eagle {};
class Snake {};
class Mouse {};

vector<Eagle> eagles;
vector<Snake> snakes;
vector<Mouse> mouses;

enum class Predators{Eagle, Snake};
enum class Victims{Snake, Mouse};

void Init()
{
	for (int i = 1; i <= 6; i++)
		eagles.push_back(Eagle());
	for (int i = 1; i <= 17; i++)
		snakes.push_back(Snake());
	for (int i = 1; i <= 55; i++)
		mouses.push_back(Mouse());
}

void Show()
{
	cout << "Eagles: " << eagles.size() << endl;
	cout << "Snakes: " << snakes.size() << endl;
	cout << "Mouses: " << mouses.size() << endl << endl;
}

void Eats(const Predators predator, const Victims victim)
{
	if (predator == Predators::Eagle && eagles.size() > 0)		// хищникът е орел
	{
		if (victim == Victims::Snake && snakes.size() > 0)	// яде змия
		{
			eagles.pop_back();						// намаляват орлите
			snakes.pop_back();						// намаляват змиите
			mouses.push_back(class Mouse());		// увеличават се мишките (орелът става мишка)
		}
		if (victim == Victims::Mouse && mouses.size() > 0)	// яде мишка
		{
			eagles.pop_back();
			mouses.pop_back();
			snakes.push_back(class Snake());		// орелът става змия
		}
	}
	if (predator == Predators::Snake && snakes.size() > 0)		// хищникът е змия
	{
		if (mouses.size() > 0)						// яде само мишки
		{
			snakes.pop_back();
			mouses.pop_back();
			eagles.push_back(class Eagle());		// змията става орел
		}
	}
}

int main()
{
	Init();
	Show();
	do {
		Predators p = Predators(rand() % 2);
		Victims v = Victims(rand() % 2);
		Eats(p, v);
		Show();
	} while (true);
}
