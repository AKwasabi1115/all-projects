#include <string>
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double money = 0;
	
	int numPennies = 0;
	int numNickels = 0;
	int numDimes = 0;
	int numQuarters = 0;

	int numOnes = 0;
	int numFives = 0;
	int numTens = 0;
	int numTwenties = 0;
	int numFifties = 0;
	int numHundreds = 0; 

	string item;
	double itemPrice;

	cout << "This calculator helps you figure out whether or not you have enough money to buy what you want. " << endl;

	cout << "What do you want to buy? " << endl;
	cin >> item;
	cout << "How much does it cost?" << endl;
	cout << "$" << endl;
	cin >> itemPrice;

	cout << "Find out how much money you have total, to see if you can buy the item." << endl;
	cout << endl;
	cout << "Enter Number of Pennies" << endl;
	cin >> numPennies;
	cout << "Number of Nickels" << endl;
	cin >> numNickels;
	cout << "Number of Dimes" << endl;
	cin >> numDimes;
	cout << "Number of Quarters" << endl;
	cin >> numQuarters;
	
	/*
	double pennyValue = 0.01;
	double nickelValue = 0.05;
	double dimeValue = 0.10;
	double quarterValue = 0.25;

	money = numPennies * pennyValue + numNickels * nickelValue + numDimes * dimeValue + numQuarters * quarterValue;
	*/


/*	string userAnswer;
	bool runDollar = false;
	bool switchStatement = false;

	while (switchStatement == false)
	{
		switch (!runDollar)
		{
			cin >> userAnswer;
		case 1 (userAnswer == "Yes" || userAnswer == "yes"):
		{
			runDollar = true;
			switchStatement = true;
			break;
		}
		case 2 (userAnswer == "No" || userAnswer == "no"):
		{
			runDollar = false;
			switchStatement = true;
			break;
		}

		default: switchStatement = false;
			cout << "Please answer Yes or No " << endl;
		}
	}
	
	if (runDollar = false)
	{
		money = numPennies * 0.01 + numNickels * 0.05 + numDimes * 0.1 + numQuarters * 0.25;
		cout << endl;
		cout << "Your total is: $" << money << endl;
	}
	else if (runDollar = true)
	{

		cout << "Enter Number of One Dollar Bills" << endl;
		cin >> numOnes;
		cout << "Number of Five Dollar Bills" << endl;
		cin >> numFives;
		cout << "Number of Ten Dollar Bills" << endl;
		cin >> numTens;
		cout << "Number of Twenty Dollar Bills" << endl;
		cin >> numTwenties;
		cout << "Number of Fifty Dollar Bills" << endl;
		cin >> numFifties;
		cout << "Number of Hundred Dollar Bills" << endl;
		cin >> numHundreds;
	}
	*/
	
	string userInput;
	bool runDollar;
	double remainder = money - itemPrice;

	cout << "Do you have bills as well? " << endl;
	cout << "Please type Yes or No. " << endl;
	cin >> userInput;

	if (userInput == "No" || userInput == "no")
	{
		 money = numPennies * 0.01 + numNickels * 0.05 + numDimes * 0.1 + numQuarters * 0.25;

		runDollar = false;
		cout << "Your total is: $" << money << endl;
		if (money >= itemPrice)
		{
			cout << "You have enough money to purchase your item, with a remainder of $" << remainder;
		}
		else if (money <= itemPrice)
		{
			cout << "Sorry, you do not have enough to purchase your item. " << endl;
		}
	}

	else if (userInput == "Yes" || userInput == "yes")
	{
		runDollar = true;

		if (runDollar = true)
		{
			cout << "Enter Number of One Dollar Bills" << endl;
			cin >> numOnes;
			cout << "Number of Five Dollar Bills" << endl;
			cin >> numFives;
			cout << "Number of Ten Dollar Bills" << endl;
			cin >> numTens;
			cout << "Enter Number of Twenty Dollar Bills" << endl;
			cin >> numTwenties;
			cout << "Number of Fifty Dollar Bills" << endl;
			cin >> numFifties;
			cout << "Number of Hundred Dollar Bills" << endl;
			cin >> numHundreds;

			if (money >= itemPrice)
			{
				cout << "You have enough money to purchase your item, with a remainder of $" << remainder;
			}
			else if (money <= itemPrice)
			{
				cout << "Sorry, you do not have enough to purchase your item. " << endl;
			}

			money = numPennies * 0.01 + numNickels * 0.05 + numDimes * 0.1 + numQuarters * 0.25
				+ numOnes * 1 + numFives * 5 + numTens * 10 + numTwenties * 20 + numFifties * 50 + numHundreds * 100;

			cout << "You have: $" << money << endl;
		}
	}
}