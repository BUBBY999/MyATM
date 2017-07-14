#include<string>
#include<iostream>
using namespace std;

int main()
{
	//ATM Login
	string names;
	cout << "Hello! Please enter your full name: " << endl;
	cin >> names;
	/*if (name ) {
		//If only one word is entered, print: enter full name.
		//In other words if the variable name doesn't contain a space, print: enter full name.

	}*/

	//What card?
	int card;
	cout << "Do you have a debit or credit card?" << endl;
	cout << "If you have a debit card, enter 1." << endl;
	cout << "If you have a credit card, enter 2." << endl;
	cout << "If you have both, enter 3." << endl;
	cin >> card;

	//If user posesses a debit card or a credit card
	if (card == 1 || card == 2) {
		if (card == 1) {

			int actions;
			cout << "Did you know? \nVisa, MasterCard, Discover Card and American Express are the four largest bank card issuers of debit cards. \nFact taken from: http://factfile.org/10-facts-about-debit-cards \n" << endl;
			cout << "Do you want to deposit or withdraw money?" << endl;
			cout << "If you want to deposit, enter 1." << endl;
			cout << "If you want to withdraw, enter 2." << endl;
			cin >> actions;

			//If user wants to deposit money
			if (actions == 1) {
				int money;
				cout << "Deposit money." << endl;
				cin >> money;
				int PIN;
				cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
				cin >> PIN;
				cout << endl;

				//If the PIN is correct. If the PIN is equal to 9999
				if (PIN == 9999) {
					cout << endl;
					cout << "You have successfully and safely deposited $" << money << "!" << endl;
				}

				//If the PIN is incorrect. If the PIN is NOT equal to 9999
				else {
					cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
				}
			}
			//If user wants to withdraw money
			else if (actions == 2) {
				int money;
				cout << "How much money would you like to withdraw?" << endl;
				cin >> money;
				int PIN;
				cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
				cin >> PIN;
				cout << endl;

				//If the PIN is correct. If the PIN is equal to 9999
				if (PIN == 9999) {
					cout << endl;
					cout << "You have successfully and safely deposited $" << money << "!" << endl;
				}

				//If the PIN is incorrect. If the PIN is NOT equal to 9999
				else {
					cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
				}
			}

			//If user enters neither 1 nor 2
			else {
				bool guessed = false;

				//While user enters neither 1 nor 2 continue asking the same question
				while (!guessed) {
					int guess;
					cout << "Please try again." << endl;
					cout << "Do you want to deposit or withdraw money?" << endl;
					cout << "If you want to deposit, enter 1." << endl;
					cout << "If you want to withdraw, enter 2." << endl;
					cin >> guess;

					//If user enters 1
					if (guess == 1) {
						guessed = true;
						int money;
						cout << "Deposit money." << endl;
						cin >> money;
						int PIN;
						cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
						cin >> PIN;
						cout << endl;

						//If the PIN is correct. If the PIN is equal to 9999
						if (PIN == 9999) {
							cout << endl;
							cout << "You have successfully and safely deposited $" << money << "!" << endl;
						}

						//If the PIN is incorrect. If the PIN is NOT equal to 9999
						else {
							cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
						}
					}

					//If user enters 2
					else if (guess == 2) {
						guessed = true;
						int money;
						cout << "How much money would you like to withdraw?" << endl;
						cin >> money;
						int PIN;
						cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
						cin >> PIN;
						cout << endl;

						//If the PIN is correct. If the PIN is equal to 9999
						if (PIN == 9999) {
							cout << "You have successfully and safely deposited $" << money << "!" << endl;
						}

						//If the PIN is incorrect. If the PIN is NOT equal to 9999
						else {
							cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
						}
					}
				}
			}
		}
	}
	else if (card == 2) {
		int actions;
		cout << "Did you know? \nIn 2012, the total value of credit card transactions in the U.S. alone was $2.48 trillion. \nFact taken from: https://www.supermoney.com/2014/04/credit-card-facts/ \n" << endl;
		cout << "Do you want to deposit or withdraw money?" << endl;
		cout << "If you want to deposit, enter 1." << endl;
		cout << "If you want to withdraw, enter 2." << endl;
		cin >> actions;

		//If user wants to deposit money
		if (actions == 1) {
			int money;
			cout << "Deposit money." << endl;
			cin >> money;
			int PIN;
			cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
			cin >> PIN;
			cout << endl;

			//If the PIN is correct. If the PIN is equal to 9999
			if (PIN == 9999) {
				cout << endl;
				cout << "You have successfully and safely deposited $" << money << "!" << endl;
			}

			//If the PIN is incorrect. If the PIN is NOT equal to 9999
			else {
				cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
			}
		}

		//If user wants to withdraw money
		else if (actions == 2) {
			int money;
			cout << "How much money would you like to withdraw?" << endl;
			cin >> money;
			int PIN;
			cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
			cin >> PIN;
			cout << endl;

			//If the PIN is correct. If the PIN is equal to 9999
			if (PIN == 9999) {
				cout << endl;
				cout << "You have successfully and safely deposited $" << money << "!" << endl;
			}

			//If the PIN is incorrect. If the PIN is NOT equal to 9999
			else {
				cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
			}
		}

		//If user enters neither 1 nor 2
		else {
			bool guessed = false;

			//While user enters neither 1 nor 2 continue asking the same question
			while (!guessed) {
				int guess;
				cout << "Please try again." << endl;
				cout << "Do you want to deposit or withdraw money?" << endl;
				cout << "If you want to deposit, enter 1." << endl;
				cout << "If you want to withdraw, enter 2." << endl;
				cin >> guess;

				//If user enters 1
				if (guess == 1) {
					int money;
					cout << "Deposit money." << endl;
					cin >> money;
					int PIN;
					cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
					cin >> PIN;
					cout << endl;

					//If the PIN is correct. If the PIN is equal to 9999
					if (PIN == 9999) {
						cout << endl;
						cout << "You have successfully and safely deposited $" << money << "!" << endl;
					}

					//If the PIN is incorrect. If the PIN is NOT equal to 9999
					else {
						cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
					}
				}

				//If user enters 2
				else {
					int money;
					cout << "How much money would you like to withdraw?" << endl;
					cin >> money;
					int PIN;
					cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
					cin >> PIN;
					cout << endl;

					//If the PIN is correct. If the PIN is equal to 9999
					if (PIN == 9999) {
						cout << "You have successfully and safely deposited $" << money << "!" << endl;
					}

					//If the PIN is incorrect. If the PIN is NOT equal to 9999
					else {
						cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
					}
				}
			}
		}
	}

	//If user posesses both a credit card and a debit card
	else if (card == 3) {
		cout << "Well you my friend are rich!\n" << endl;
		int actions;
		cout << "Do you want to deposit or withdraw money?" << endl;
		cout << "If you want to deposit, enter 1." << endl;
		cout << "If you want to withdraw, enter 2." << endl;
		cin >> actions;

		//If user wants to deposit money
		if (actions == 1) {
			int money;
			cout << "Deposit money." << endl;
			cin >> money;
			int PIN;
			cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
			cin >> PIN;
			cout << endl;

			//If the PIN is correct. If the PIN is equal to 9999
			if (PIN == 9999) {
				cout << "You have successfully and safely deposited $" << money << "!" << endl;
			}

			//If the PIN is incorrect. If the PIN is NOT equal to 9999
			else {
				cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
			}
		}

		//If user wants to withdraw money
		else if (actions == 2) {
			int money;
			cout << "How much money would you like to withdraw?" << endl;
			cin >> money;
			int PIN;
			cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
			cin >> PIN;
			cout << endl;

			//If the PIN is correct. If the PIN is equal to 9999
			if (PIN == 9999) {
				cout << endl;
				cout << "You have successfully and safely deposited $" << money << "!" << endl;
			}

			//If the PIN is incorrect. If the PIN is NOT equal to 9999
			else {
				cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
			}
		}

		//If user enters neither 1 nor 2
		else {
			bool guessed = false;

			//While user enters neither 1 nor 2 continue asking the same question
			while (!guessed) {
				int guess;
				cout << "Please try again." << endl;
				cout << "Do you want to deposit or withdraw money?" << endl;
				cout << "If you want to deposit, enter 1." << endl;
				cout << "If you want to withdraw, enter 2." << endl;
				cin >> guess;

				//If user enters 1
				if (guess == 1) {
					guessed = true;
					int money;
					cout << "Deposit money." << endl;
					cin >> money;
					int PIN;
					cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
					cin >> PIN;
					cout << endl;

					//If the PIN is correct. If the PIN is equal to 9999
					if (PIN == 9999) {
						cout << endl;
						cout << "You have successfully and safely deposited $" << money << "!" << endl;
					}

					//If the PIN is incorrect. If the PIN is NOT equal to 9999
					else {
						cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
					}
				}

				//If user enters 2
				else if (guess == 2) {
					guessed = true;
					int money;
					cout << "How much money would you like to withdraw?" << endl;
					cin >> money;
					int PIN;
					cout << "Enter PIN (Hint: The PIN is four of the same digits!): ";
					cin >> PIN;
					cout << endl;

					//If the PIN is correct. If the PIN is equal to 9999
					if (PIN == 9999) {
						cout << "You have successfully and safely deposited $" << money << "!" << endl;
					}

					//If the PIN is incorrect. If the PIN is NOT equal to 9999
					else {
						cout << "PIN incorrect. Police is coming to arrest you! In 3... 2... 1..." << endl;
					}
				}
			}
		}
	}

	//If user enters something other than a 1, a 2, or a 3
	else {
		bool guessed2 = false;

		//Continue asking the same question
		while (!guessed2) {
			int guess2;

			cout << "Please try again." << endl;
			cout << "Do you have a debit or credit card?" << endl;
			cout << "If you have a debit card, enter 1." << endl;
			cout << "If you have a credit card, enter 2." << endl;
			cout << "If you have both, enter 3." << endl;
			cin >> guess2;

			if (guess2 == 1) {
				guessed2 = true;

			}


		}
	}
}//main