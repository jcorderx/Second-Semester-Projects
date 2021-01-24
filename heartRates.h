#include <iostream>
#include <string>


using namespace std;

class HeartRate{
	
	public:
		HeartRate(){};

		HeartRate(string iFirstName, string iLastName, int iDay, int iMonth, int iYear){
			firstName = iFirstName;
			lastName = iLastName;
			day = iDay;
			month = iMonth;
			year = iYear;
		};

		~HeartRate(){};

		//mutators
		void setFirstName(string iFirstName);
		void setLastName(string iLastName);
		void setDateofBirth(int iMonth, int iDay, int iYear);
		void setAge(int iAge);
		void setMaxHeartRate(int iAge);

		//accessors
		string getFirstName();
		string getLastName();
		int getMonth();
		int getDay();
		int getYear();
		int getAge();
		int getMaxHeartRate();
		int getLowestTargetHeartRate();
		int getHighestTargetHeartRate();

	private:
		string firstName;
		string lastName;
		int day;
		int month;
		int year;
		int maxHeartRate;
		int lowestTargetHeartRate;
		int highestTargetHeartRate;

};
