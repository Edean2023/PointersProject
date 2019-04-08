#include <iostream>		
#include <string>		

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using namespace std;		
// declares the function 'Choice'
int* Choice();		
// manages the program
int programManager;
// declares the function 'pointUsage'
void pointUsage(int* total, int difference);			
		
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()		
{
	// sets the starting rewards points total to 0
	int rewardsPoints = 0;		
	// sets a pointer for rewards points
	int* rRewardsPoints = &rewardsPoints;
	// sets the users name as string
	string name;		
	// sets a pointer for name
	string* ruserName = &name;		

	// title of program
	cout << "\t|||-----------------------|||\n";
	cout << "\t|||Ethan CO Rewards Points|||\n";	
	cout << "\t|||-----------------------|||\n\n";
	// asks user to type name
	cout << "Please type your name \n";		
	// gets user information into userName
	cin >> *ruserName;		
	// welcomes the user with the name they typed
	cout << "\n Hello, " << name << "!\n";		
	// tells the user their current total of rewards points
	cout << "Your current rewards total is: " << rewardsPoints << "\n\n";

	// starts a loop equal to 'p'
	char loop = 'p';	
	// starts do loop
	do {
		// programManager is equal to Choice
		programManager = *Choice();
		// if programManager is equal to 1, do this
		if (programManager == 1) {		
			// asks user how many points they would like to add
			cout << "-------------------------------------------------------\n";
			cout << "How many points would you like to add to your account?: \n";	
			cout << "-------------------------------------------------------\n";
		}
		// otherwise if programManager is equal to 2, do this
		else if (programManager == 2) {		
			// asks the user how much they would like to spend
			cout << "-----------------------------------------\n";
			cout << "How many points would you like to spend?: \n";	
			cout << "-----------------------------------------\n";
		}
		// declares the amount
		int amount;		
		// takes in user information to see how much they would like to add or spend
		cin >> amount;		
		// do this
		pointUsage(rRewardsPoints, amount);		
		// starts a do loop
		do {	
			// asks the user if they would like to continue
			cout << "----------------------------------------------------------------\n";
			cout << "Would you like to continue to manage your rewards points? (y/n): \n";
			cout << "----------------------------------------------------------------\n";
			// takes in user input into the loop
			cin >> loop;		
			// this is just for spacing 
			cout << endl << endl;		
			// starts while loop
		} while (loop != 'y' && loop != 'n');		
		// while for y
	} while (loop == 'y');		
	// tells the user to have a nice day
	cout << "Have a nice day!\n\n";		
	// pauses so user can read
	system("pause");						
	// ends the program
	return 0;			
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// displays choices to add or spend points as well as tells the user what they chose
int* Choice() {		
	// sets pointer to programManager
	int* pProgramManager = &programManager;		
	// starts do loop
	do {		
		cout << "-------------------------------------------------------------------------\n";
		cout << "Would you like to Add points to your account or Spend points for rewards?\n";
		cout << "-------------------------------------------------------------------------\n\n";
		// tells the user to type 1 to add points
		cout << "To Add Points: 		type 1.\n";
		// tells the user to type 2 to spend points
		cout << "To Spend Points:	type 2.\n";
		// takes in user input into ProgramManager
		cin >> *pProgramManager;		
		// starts while loop
	} while (*pProgramManager != 1 && *pProgramManager != 2);		
	// tells the user what they chose
	cout << "You chose: ";		
	// if choice was 1 then do this
	if (*pProgramManager == 1) {		
		// tells the user they chose to add points
		cout << "Add Points.\n\n";
	}
	// otherwise do this
	else {
		// tells the user they chose to spend points
		cout << "Spend Points\n\n";	
	}
	// return the value
	return pProgramManager;		
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// handles the points for when the user adds and spends points and tells them what their new total of points is
void pointUsage(int* total, int difference) {
	// if programManager is equal to 1 do this
	if (programManager == 1) {
		// add points
		*total += difference;
	}
	// otherwise if programManager is equal to 2, do this
	else if (programManager == 2) {
		// spend points
		*total -= difference;
	}
	// tells the user what their new total is
	cout << "Your new total is: " << *total << "\n\n";
	// return the values
	return;
}