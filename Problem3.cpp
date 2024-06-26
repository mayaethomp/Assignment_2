// Maya Thompson
// CS 1, Section # 0107
// Assignment #2, Problem #3
// Summary: 

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

// Declare variables
char ch_pet = 'A';
bool neutered;
double fee = 0;

cout << "Pet Insurance Program \n \n";

// Ask the user to enter the first letter of the type of pet they would like to insure
cout << "Please enter the first letter of the type of pet you would like to insure: \n" 
     << "Dog \n" << "Cat \n" << "Bird \n" << "Reptile \n";

cout << "Animal Type: \n";
cin >> ch_pet;

// Ask the user if their pet has been neutered with a y or n
cout << "Has the animal been neutered \n";
cin >> neutered;

// Determine the user's insurance fee

// Output the user's insurance price to the screen, including their pet type and neutered/non-neutered
cout << "The fee to insure your " << neutered << " " << ch_pet << " is " << fee;


}