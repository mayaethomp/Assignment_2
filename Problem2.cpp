// Maya Thompson
// CS 1, Section # 0107
// Assignment #2, Problem #2
// Summary: This program calculates a user's interest and balance based on their deposit amount and number of years deposited

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

// Declare variables to store user input
double deposit = 0;
double years = 0;
double interest = 0;
double balance = 0;
double rate = 0;

cout << "Deposits with Interest Program \n \n";

// Ask the user to enter the amount of money deposited
cout << "Please enter the amount deposited today: \n";
cin >> deposit;

// Ask the user to enter the number of years the money has been on deposit
cout << "Please enter the number of years it has been on deposit: \n";
cin >> years;

// Determine the interest rate based on the users input of years deposited
if (years >= 5) {
  rate = 0.045;
} else if (years < 5 && years >= 4) {
  rate = 0.04;
} else if (years < 4 && years >= 3) {
  rate = 0.035;
} else if (years < 3 && years >= 2) {
  rate = 0.025;
} else if (years <2 && years >= 1) {
  rate = 0.02;
} else if (years < 1) {
  rate = 0.014;
}

// Compute the interest earned based on the user's input 
interest = deposit * rate * years;

// Compute the balance as the sum of the initial deposit and interest accrued
balance = deposit + interest;

// Output the user's initial deposit, interest earned, and the new balance to the screen
cout << "Your original deposit was: $" << setprecision(2) << fixed << deposit << endl
     << "Your interest earned in " << years << " years is $" << interest << endl
     << "Your new balance is $" << balance << endl;


}