//MD Abir A. Choudhury
//021618
//Sensor Data - E4

#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;

int main()
{
	//Intro
	cout << "You are using this program to keep track of data.\n";
	cout << "-------------------------------------------------\n";
	cout << "Welcome to Sensor Monitor v2.2\n";

	//Input
	int option = 0;
	
	//Processing --> Output
	//loop for constant ask and compute

	int temperature = 0;
	int highTemp = 0;
	int lowTemp = 0;
	int total = 0;
	double count = 0.0;
	double average = 0.0;

	do {
		cout << "Pick an option:\n";
		cout << "1- Submit Temperature Reading\n";
		cout << "2- Temperature Report\n";
		cout << "0- Exit\n";
		cin >> option;
		count++; //counting the number of iterations

		if (option == 1) {
			//inputting the temperature
			cout << "Enter a temperature reading between -200 and 200: \n";
			cin >> temperature;
			//validating the temperature
			if (temperature < -200 || temperature > 200) {
				cout << "You have entered an invalid number\nPlease reenter a valid temperature between -200 and 200.\n";
				cin.ignore(256, '\n') >> temperature;
			}
			//check for highest temperature
			if (temperature > highTemp) {
				highTemp = temperature;
				cout << "The highest temperature is now: " << highTemp << endl;
			}
			//check for lowest temperature
			if (temperature < lowTemp) {
				lowTemp = temperature;
				cout << "The lowest temperature is now: " << lowTemp << endl << endl;
			}

			total += temperature;
			average = total / count;
		} 

		else if (option == 2) {
			cout << "The lowest temp is: " << lowTemp << endl;
			cout << "The highest temp is: " << highTemp << endl;
			cout << "The average temp is: " << setprecision(2) << fixed << average << endl << endl;
		}
		else if (option != 1 && option != 2 && option != 0) {
			cout << "You have entered an invalid number. Please input any numbers in the list provided. \n"
				<< "1, 2, 0\n";
		}
	} while (option != 0);
	
	cout << "You are done using this program. \nThank You for using our service.\n";

	system("PAUSE");
	return 0;
}