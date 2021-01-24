#include <iostream>
#include <string> 
#include <ctime>
#include "heartRates.h"

using namespace std;

//Member Function Definitions and construtors

//Mutators
void HeartRate::setFirstName(string iFirstName){
	firstName = iFirstName;
}

void HeartRate::setLastName(string iLastName){
	lastName = iLastName;
}

void HeartRate::setDateofBirth(int iMonth, int iDay, int iYear){
	month = iMonth;
	day = iDay;
	year = iYear;
}

//Accessors

string HeartRate::getFirstName(){
	return firstName;
}

string HeartRate::getLastName(){
	return lastName;
}

int HeartRate::getMonth(){
	return month;
}

int HeartRate::getDay(){
	return day;
}

int HeartRate::getYear(){
	return year;
}

int HeartRate::getAge(){
	time_t currentTime = time(0);
	tm *tm = localtime(&currentTime);

	int currentYear = tm->tm_year + 1900;
	int currentMonth = tm->tm_mon + 1;
	int currentDay = tm->tm_mday;
	int age = currentYear - year;

	if (currentMonth < month || (currentMonth == month && currentDay < day)){
		age -= 1;
	}
	return age;
}

int HeartRate::getMaxHeartRate(){
	maxHeartRate = 220 - getAge();
	return maxHeartRate;
}

int HeartRate::getLowestTargetHeartRate(){
	lowestTargetHeartRate = (getMaxHeartRate() * .5);
	return lowestTargetHeartRate;
}

int HeartRate::getHighestTargetHeartRate(){
	highestTargetHeartRate = (getMaxHeartRate() * .85);
	return highestTargetHeartRate;
}
