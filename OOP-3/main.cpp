/*
 * main.c
 *	WAP to print table of a given number
 *  Created on: 16-Aug-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

int main() {

	int in;

	cout << "Enter your number: ";
	cin >> in;

	for (int i = 0; i <= 10; i++) {
		cout << in << "*" << i << " = " << in * i << endl;
	}

}
