#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	double budget;
	cin >> budget;
	string season;
	cin >> season;
	string destinationResult, holidayInformation, restingPlace;
	double moneySpent = 0.0;
	if (budget <= 100.0)
	{
		destinationResult = "Bulgaria";
		if (season == "summer")
		{
			moneySpent = 0.3 * budget;
			restingPlace = "Camp";
		}
		else
		{
			moneySpent = 0.7 * budget;
			restingPlace = "Hotel";
		}
	}
	else
		if (budget <= 1000.0)
		{
			destinationResult = "Balkans";
			if (season == "summer")
			{
				moneySpent = 0.4 * budget;
				restingPlace = "Camp";
			}
			else
			{
				moneySpent = 0.8 * budget;
				restingPlace = "Hotel";
			}
		}
		else
		{
			destinationResult = "Europe";
			moneySpent = 0.9 * budget;
			restingPlace = "Hotel";
		}
	cout << "Somewhere in " << destinationResult << endl;
	cout << restingPlace << " - " << fixed << setprecision(2) << moneySpent << endl;
}