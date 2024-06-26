// Maya Thompson
// CS 1, Section # 0107
// Assignment #2, Problem #2
// Summary: 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

// Declare variables to store user input
double deposit = 0;
int years = 0;
double interest = 0;
double balance = 0;

cout << "Deposits with Interest Program \n \n";

// Ask the user to enter the amount of money deposited
cout << "Please enter the amount deposited today: \n";
cin >> deposit;

// Ask the user to enter the number of years the money has been on deposit
cout << "Please enter the number of years it has been on deposit: \n";
cin >> years;

// Calculate the interest earned based on the user input 



// Output the user's initial deposit, interest earned, and the new balance to the screen
cout << "Your original deposit was: $" << deposit << endl
     << "Your interest earned in " << years << " years is $" << interest << endl
     << "Your new balance is $" << balance << endl;


}