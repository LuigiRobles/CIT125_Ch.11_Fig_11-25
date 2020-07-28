// CIT125 Luigi Robles
// Ch.11 Pg.390 Figure 11-25
// Currency Converter Program
// Converts American Dollars to different currencies


#include <iostream>
using namespace std;

int main()
{
	//declare and initialize double array
	double rates[4] = { 0.92, 1.81, 0.98, 0.67 };

	//declare and initialize variables
	int choice = 0;
	int dollars = 0;
	double results = 0.0;

	//output part of IPO to create Currency Menu 
	cout << "Currency Menu" << endl;
	cout << "1 Euro" << endl;
	cout << "2 British Pound" << endl;
	cout << "3 German Mark" << endl;
	cout << "4 Swiss Franc" << endl;
	cout << "Choice (1 to 4): ";
	cin >> choice; //input part of IPO for Menu selection

	if (choice > 0 && choice < 5) //checking if selection is within Menu range
	{
		cout << "Number of American dollars: ";
		cin >> dollars;
		cout << endl;
		if (choice == 1) //nested if..else if.. statements
			cout << "Euros: ";
		else if (choice == 2)
			cout << "British pounds: ";
		else if (choice == 3)
			cout << "German marks: ";
		else
			cout << "Swiss francs: ";
		//end if

		results = dollars * rates[choice - 1]; //processing part of IPO
		cout << results << endl; //output part of IPO for results of processing
	}
	else
		cout << "Invalid menu choice" << endl; //output for when user enters invalid selection
	//end if
	return 0;
}	//end of main function