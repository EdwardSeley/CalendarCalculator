// Calculates the days left of school
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int hoursInDay = 24;
	const int daysInWeek = 7;
	const int daysInEachMonth[] = { 31, 28, 31, 30, 31 };
	int x = 0;

	int daysLeft = 0;
	string inputDate;
	string lastDate;

	cout << "Enter the current month and day (like this 4/24): ";
	cin >> inputDate;
	cout << "Enter the last month and day of school (like this 5/9): ";
	cin >> lastDate;

	int slashLocation = inputDate.find('/');
	int currentMonth = atoi(inputDate.substr(0, slashLocation).c_str());
	int currentDay = atoi(inputDate.substr(slashLocation + 1, inputDate.length()).c_str());

	slashLocation = lastDate.find('/');
	int lastMonth = atoi(lastDate.substr(0, slashLocation).c_str());
	int lastDay = atoi(lastDate.substr(slashLocation + 1, lastDate.length()).c_str());

	int totalDaysSoFar = 0;
	for (x = 0; x < currentMonth - 1; x++)
		totalDaysSoFar += daysInEachMonth[x];

	totalDaysSoFar += currentDay;

	int totalDaysInSemester = 0;
	for (x = 0; x < lastMonth - 1; x++)
		totalDaysInSemester += daysInEachMonth[x];

	totalDaysInSemester += lastDay;

	daysLeft = totalDaysInSemester - totalDaysSoFar;

	cout << "\nDays left of school: " << daysLeft << endl;

	system("pause");
	return 0;
}