#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "Hello and welcome to my Hangman Game!" << endl;
	cout << "Player 1 chooses the word and Player 2 tries to guess it." << endl;
	string word;
	//P1 chooses the word
	cout << "Player 1 please enter your word:" << endl;
	cin >> word;
	system("CLS");

	//Calculate word length
	int wordLength = word.length();
	int lives = (wordLength / 2 )+2;
	cout << "Player 2 you have " << lives << " lives" << endl;
	const int size=30;
	string array1[size];

	//Break up the word letter by letter
	for (int num=0; num <= wordLength; num+=1) {
		array1[num] = word[num];
	}

	
	/*string array2;
	string underscore;
	for (int u=0; u <= wordLength-1; u+=1) {
		array2[u] = underscore;
		underscore += "_";
	}
	Ask letter and P2 enters it
	*/
	

	string array2[size];
	string blank = "__  ";
	for (int zero = 0; zero < wordLength; zero+=1) {
		array2[zero] = blank;
		cout << array2[zero];
	}

	bool guessed = false;
	while (!guessed) {
		for (int f=0; f < wordLength; f += 1) {

			if (guessed == true) {
				return 0;
			}
			char letter;
			cout << endl;
			cout << "Player 2 guess a letter: ";
			cin >> letter;

			int numOfChar = 0;
			int i = 0;
			for (i; i < wordLength; i += 1) {
				if (letter == word[i]) {

					numOfChar += 1;
					array2[i] = letter;
					
					//cout << array2[i] << endl;

					for (int k = 0; k < wordLength; k++) {
						cout << array2[k] << " " ; 
					}

				
					for (int y = 0; y < wordLength; y += 1) {
						if (array2[y] == blank) {
							guessed = false;

						}
						else {
							guessed = true;
						}
					}
				


				}//if
			}//for
			if (numOfChar == 1) {
				cout << "\nCorrect! The letter " << letter << " is in the word." << endl;
				
			}//if
			if (numOfChar >= 2) {
				cout << "\nCorrect! The letter " << letter << " is in the word " << numOfChar << " times!" << endl;
			}//if
			if (numOfChar == 0) {
				cout << "\nIncorrect! The letter " << letter << " is NOT in the word." << endl;
				lives--;
				cout << "You now have: " << lives << " lives." << endl;
			}//if
			if (lives == 0) {
				guessed = true;
				cout << "You lose! The word was: " << word << "." << endl;
			}
		}//for
	}//while

	cout << "lives = " << lives << endl;

	bool man = false;
	for (int j = 0; j < wordLength; j++) {

		if (array2[j] == array1[j] && lives > 0) {
			bool man = true;
		}
	}
	if (man = true) {
		cout << "YOU WIN! The word was: " << word << "." << endl;
	}
}//main
