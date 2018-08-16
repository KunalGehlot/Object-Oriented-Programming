/*
 * main.cpp
 *OBJ - wap to find out whether the given no is even or odd.
 *
 *  Created on: 16-Aug-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

int main() {

	int in;

	cout << "Enter your number: ";
	cin >> in;

	if (in % 2 == 0) {
		cout << "Even number" << endl;
	} else {
		cout << "Odd number" << endl;
	}

}
