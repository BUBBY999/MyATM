#include<string>
#include<iostream>
using namespace std;

int main()
{
	//ATM Login
	string name;
	cout << "Hello! Please enter your full name: " << endl;
	cin >> name;
	/*if (name ) {
		//If only one word is entered, print: enter full name.
		//In other words if the variable name doesn't contain a space, print: enter full name.

	}*/

	int card;
	cout << "Do you have a debit or credit card?" << endl;
	cout << "If you have a debit card, enter 1." << endl;
	cout << "If you have a credit card, enter 2." << endl;
	cout << "If you have both, enter 3." << endl;
	cin >> card;

	if (card == 1 || card == 2) {
		int actions;
		cout << "Do you want to deposit or withdraw money?" << endl;
		cout << "If you want to deposit, enter 1." << endl;
		cout << "If you want to withdraw, enter 2." << endl;
		cin >> actions;
	}

	else {
		cout << "Well you my friend are rich!" << endl;
		cout << "" << endl;
		int actions;
		cout << "Do you want to deposit or withdraw money?" << endl;
		cout << "If you want to deposit, enter 1." << endl;
		cout << "If you want to withdraw, enter 2." << endl;
		cin >> actions;
	}

}