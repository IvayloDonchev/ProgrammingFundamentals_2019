#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double budget;
	cin >> budget;
	string ticketType;
	cin >> ticketType;
	int people;
	cin >> people;
	double transportCharges{ 0.0 }, moneyForTickets{ 0.0 }, moneyDifference{ 0.0 };
	if (people <= 4)
		transportCharges = 0.75 * budget;
	else
		if (people <= 9)
			transportCharges = 0.6 * budget;
		else
			if (people <= 24)
				transportCharges = 0.5 * budget;
			else
				if (people <= 49)
					transportCharges = 0.4 * budget;
				else
					transportCharges = 0.25 * budget;
	if (ticketType == "VIP")
		moneyForTickets = people * 499.99;
	else
		moneyForTickets = people * 249.99;
	moneyDifference = budget - transportCharges - moneyForTickets;
	if (moneyDifference < 0)
		cout << "Not enough money! You need " 
		     << fixed << setprecision(2) << abs(moneyDifference) << " leva.\n";
	else
		cout << "Yes! You have " 
		     << fixed << setprecision(2) << moneyDifference << " leva left.\n";
}