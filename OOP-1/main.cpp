/*
 * main.cpp
 *
 * BASIC I/O PROGRAM
 *
 * OBJ - WAP TO CAL MARKS OF THREE SUBJECTS AND FIND OUT %
 *
 *  Created on: 16-Aug-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

int main() {

	double TotalMarks, sub1, sub2, sub3;

	cout << "Enter marks of first subject: " << endl;
	cin >> sub1;
	cout << "Enter marks of second subject: " << endl;
	cin >> sub2;
	cout << "Enter marks of third subject: " << endl;
	cin >> sub3;

	TotalMarks = sub1 + sub2 + sub3;

	cout << "Percentage is: " << TotalMarks / 3 << endl;
}
