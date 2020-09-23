#include <iostream>
#include <cstdlib> //c standart library
#include <ctime> //c time library
using namespace std;

//function prototype
int throwDice();
void lineBar();
void printMenu();

int main () {
	system("cls"); //system("clear"); on linux/unix os
	int p1_dice, p2_dice;
	char throw_dice;

	printMenu(); //call printMenu
	srand(time(0)); //to (truly) random dice on every chance

	cout << "Player 1 | Throw the dice? (y/n) : "; cin >> throw_dice;

	if (throw_dice == 'y' || throw_dice == 'Y') {
		p1_dice = throwDice(); //assign random number to p1_dice
	} else if (throw_dice == 'n' || throw_dice == 'N') {
		cout << "you're not throw the dice, game cancelled.\n";
	} else {
		cout << "input y or n only!\n";
	}

	cout << "Player 2 | Throw the dice? (y/n) : "; cin >> throw_dice;

	if (throw_dice == 'y' || throw_dice == 'Y') {
		p2_dice = throwDice(); //assign random number to p2_dice
	} else if (throw_dice == 'n' || throw_dice == 'N') {
		cout << "you're not throw the dice, game cancelled.\n";
	} else {
		cout << "input y or n only!\n";
	}

	cout << endl;
	lineBar();
	cout << "Player 1 dice : " << p1_dice << endl;
	cout << "Player 2 dice : " << p2_dice << endl;

	if (p1_dice > p2_dice && p2_dice != 0) {
		lineBar();
		cout << "=========   # Player 1 WIN! #   =========\n";
		lineBar();
	} else if (p2_dice > p1_dice && p1_dice != 0 && p2_dice <= 6) {
		lineBar();
		cout << "=========   # Player 2 WIN! #   =========\n";
		lineBar();
	} else if (p1_dice == 0 || p2_dice == 0 || p1_dice > 6 || p2_dice > 6) {
		lineBar();
		cout << "=====   Error happen, Game failed   =====\n";
		lineBar();
	} else {
		lineBar();
		cout << "===   Player 1 and Player 2 is DRAW   ===\n";
		lineBar();
	}

	return 0;
}

//function to throw dice
int throwDice() {
	int theDice = 1 + rand() %6;
	return theDice;
}

//function to print linebar
void lineBar() {
	cout << "=========================================\n";
}

//function to print menu
void printMenu() {
	cout << "=========================================\n";
	cout << "============  : DICE GAME :  ============\n";
	cout << "==========  : Need 2 Player :  ==========\n";
	cout << "=========================================\n\n";
}
