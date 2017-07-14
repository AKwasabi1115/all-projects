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
	double tax = 1.09;
	

	cout << "This calculator helps you figure out whether or not you have enough money to buy what you want. " << endl;

	cout << "What do you want to buy? (One word)" << endl;
	cin >> item;
	cout << "How much does it cost?" << endl;
	cout << "$";
	cin >> itemPrice;

	double priceWithTax = itemPrice * tax;

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
	double remainder;
	double negativeRemainder;

	cout << "Do you have bills as well? " << endl;
	cout << "Please type Yes or No. " << endl;
	cin >> userInput;

	

	if (userInput == "No" || userInput == "no")
	{
		money = numPennies * 0.01 + numNickels * 0.05 + numDimes * 0.1 + numQuarters * 0.25;

		remainder = money - itemPrice;
		negativeRemainder = itemPrice - money;
		double remainderAfterTax = money - priceWithTax;
		double negativeRemainderAfterTax = priceWithTax - money;

		runDollar = false;
		cout << "You have a total of: $" << money << endl;

		if (money >= itemPrice)
		{
			cout << "You have enough money to purchase a " << item << ", with a remainder of $" << remainder << endl;
			cout << "If you add Santa Clara County tax, you will have a remainder of $" << remainderAfterTax << endl;
		}
		else if (money <= itemPrice)
		{
			cout << "Sorry, you do not have enough to purchase a " << item << "." << endl;
			cout << "You need $" << negativeRemainder << " more ($" << negativeRemainderAfterTax << " if you include tax)." << endl;

			string wishListContents[10];
			string wishListOpen;
			cout << "Would you like to add this item to your wishlist? (Yes or No) " << endl;
			cin >> wishListOpen;

			if (wishListOpen == "Yes" || wishListOpen == "yes")
			{
				wishListContents[0] = item;
				cout << "Your item has been added to the wish list! " << endl;
			}
			if (wishListOpen == "No" || wishListOpen == "no")
			{
				cout << "Thanks for using the purchase calculator!" << endl;
			}
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

			money = numPennies * 0.01 + numNickels * 0.05 + numDimes * 0.1 + numQuarters * 0.25
				+ numOnes * 1 + numFives * 5 + numTens * 10 + numTwenties * 20 + numFifties * 50 + numHundreds * 100;

			remainder = money - itemPrice;
			negativeRemainder = itemPrice - money;
			double remainderAfterTax = money - priceWithTax;
			double negativeRemainderAfterTax = priceWithTax - money;

			cout << "You have a total of: $" << money << endl;

			if (money >= itemPrice)
			{
				cout << "You have enough money to purchase a " << item << ", with a remainder of $" << remainder << endl;
				cout << "If you add Santa Clara County tax, you will have a remainder of $" << remainderAfterTax << endl;
			}
			else if (money <= itemPrice)
			{
				cout << "Sorry, you do not have enough to purchase a " << item << "." << endl;
				cout << "You need $" << negativeRemainder << " more. ($" << negativeRemainderAfterTax << " if you include tax." << endl;

				string wishListContents[10];
				string wishListOpen;
				cout << "Would you like to add this item to your wishlist? (Yes or No) " << endl;
				cin >> wishListOpen;

				if (wishListOpen == "Yes" || wishListOpen == "yes")
				{
					wishListContents[0] = item;
					cout << "Your item has been added to the wish list! " << endl;
				}
				if (wishListOpen == "No" || wishListOpen == "no")
				{
					cout << "Thanks for using the purchase calculator!" << endl;
				}
			}
		}
	}
}