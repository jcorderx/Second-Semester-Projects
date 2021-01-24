#include <iostream>
#include <string>
#include "heartRates.h"

using namespace std;


int main(){

	string firstName;
	string lastName;
	int month, day, year;

	HeartRate heartRateOBJ;

	//Reads in First name and last name
	

	cout << "Please enter your First Name " << endl;
	cout << "First Name: ";
	cin >> firstName;

	cout << "Please enter your Last Name " << endl;
	cout << "Last Name: ";
	cin >> lastName;

	//Reads in date of birth
	cout << "Please enter your date of Birth: MM/DD/YYYY" << endl;
	cout << "Month: ";
	cin >> month;
	cout << "Day: ";
	cin >> day;
	cout << "Year: ";
	cin >> year;

	heartRateOBJ.setFirstName(firstName);
	heartRateOBJ.setLastName(lastName);

	if(month > 12 || month < 1){
		cout << "Invalid Month Entry" << endl;
	}
	else if(day > 31 || day < 1){
		cout << "Invalid Day Entry" << endl;
	}
	else{
		heartRateOBJ.setDateofBirth(month, day, year);
		cout << " Date of Birth: " << heartRateOBJ.getMonth() << "/" << heartRateOBJ.getDay()
		<< "/" << heartRateOBJ.getYear() << endl;
	}

	cout << "Age : " << heartRateOBJ.getAge() << endl;
	cout << "Max Heart Rate: " << heartRateOBJ.getMaxHeartRate() << endl;
	cout << "Lowest Target Heart Rate: " << heartRateOBJ.getLowestTargetHeartRate()
	<< "\nHighest Targer Heart Rate: " << heartRateOBJ.getHighestTargetHeartRate() << endl;

	//Constructor with 5 arguments
	HeartRate heartRate = HeartRate(firstName, lastName, month, day, year);


}
