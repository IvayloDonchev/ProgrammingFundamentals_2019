#include<iostream>
#include<string>
using namespace std;

int main()
{
	int examHours, examMinutes, arrivalHours, arrivalMinutes;
	cin >> examHours;
	cin >> examMinutes;
	cin >> arrivalHours;
	cin >> arrivalMinutes;
	string late = "Late";
	string onTime = "On time";
	string early = "Early";
	int examTime = (examHours * 60) + examMinutes;
	int arrivalTime = (arrivalHours * 60) + arrivalMinutes;
	int totalMinutesDifference = arrivalTime - examTime;
	string studentArrival = late;
	if (totalMinutesDifference < -30)
		studentArrival = early;
	else
		if (totalMinutesDifference <= 0)
			studentArrival = onTime;
	string result;
	if (totalMinutesDifference != 0)
	{
		int hoursDifference = abs(totalMinutesDifference / 60);
		int minutesDifference = abs(totalMinutesDifference % 60);
		if (hoursDifference > 0)
		{
			result = to_string(hoursDifference) + ":";
			if (minutesDifference < 10)
				result += "0";
			result += to_string(minutesDifference) + " hours";
		}
		else
			result = to_string(minutesDifference) + " minutes";
		if (totalMinutesDifference < 0)
			result += " before the start";
		else
			result += " after the start";
	}
	cout << studentArrival << endl;
	if (result != "")
		cout << result << endl;
}