// Maya Thompson
// CS 1, Section # 0107
// Assignment #2, Problem #1
// Summary: This program calculates a users salary based on number of hours worked and the user's hourly pay rate. 

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  // Declare variables
  double hours = 0;
  double rate = 0;
  double salary = 0;
  
  cout << "Salary with Overtime Program \n \n";

  // Prompt the user to enter the number of hours worked and store input

  cout << "Please enter the number of hours worked: \n";
  cin >> hours;

  // Prompt the user to input their hourly rate and store input

  cout << "Please enter the hourly rate: \n";
  cin >> rate;

  // Write an if statement that determines whether or not the user receives the basic rate or basic rate and overtime
  if (hours <= 40) {
    salary = hours * rate;
  } else if (hours > 40) {
    salary = ((40 * rate) + ((hours - 40) * (rate * 1.5)));
  }

  // Output the user's salary to the screen
  cout << "Your salary for the week is: $" << setprecision(2) << fixed << salary << endl;

  return 0;

}
