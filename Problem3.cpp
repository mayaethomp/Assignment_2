// Maya Thompson
// CS 1, Section # 0107
// Assignment #2, Problem #3
// Summary: This program outputs a user's pet insurance fee based on the user's input data regarding their pet's information

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

// Declare variables
char petType = 'A';
char neutered;

     cout << "Pet Insurance Program \n \n";

// Prompt the user to enter the first letter of the type of pet they would like to insure
     
     cout << "Please enter the first letter of the type of pet you would like to insure: \n" 
     << "Dog \n" << "Cat \n" << "Bird \n" << "Reptile \n";

     cout << "Animal Type: \n";
     cin >> petType;

// Use a switch statement to determine pet insurance fee

     switch (petType) {

          case 'D':
               cout << "Is your dog neutered: Y / N \n";
               cin >> neutered;
                    if (neutered == 'Y') {
                         cout << "The fee to insure your neutered Dog is $50";
                    } else if (neutered == 'N') {
                         cout << "The fee to insure your non-neutered Dog is $80";
                    }
               break;
          case 'C':
               cout << "Is your cat spayed: Y / N \n";
               cin >> neutered;
                    if (neutered == 'Y') {
                         cout << "The fee to insure your spayed Cat is $40";
                    } else if (neutered == 'N') {
                         cout << "The fee to insure your non-spayed Cat is $60";
                    }
               break;
          case 'B':
               cout << "There is no cost to insure your Bird \n";
               break;
          case 'R':
               cout << "There is no cost to insure your Reptile \n";
               break;
          default:
               cout << "Invalid data - no fee calculated";

     }

     return 0;


}