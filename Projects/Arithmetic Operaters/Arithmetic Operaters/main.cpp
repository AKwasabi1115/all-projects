#include<iostream>

using namespace std;

int main() {
	// TODO Create two int variables
	int firstNum = 12;
	int secondNum = 17;
	// TODO Add 10 to one of the variables
	firstNum = firstNum + 10;
	// TODO Use the *= operator to multiply and store one of the variables with the other
	firstNum = firstNum *secondNum;
	// TODO Increment the second variable with an increment operator
	secondNum = secondNum++;
		// TODO Print the value of the variables
	cout << "Number One: " << firstNum << endl;
	cout << "Number Two: " << secondNum << endl;

}