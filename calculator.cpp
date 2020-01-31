#include <iostream>

using namespace std;

int main()
{
  // main process here
  // declare variables
  double first_number;
  double second_number;
  char sum_operator; // to hold the operator
  double answer;
  bool operator_is_present = true; // to check if the operator is present

  // request numbers from user and assign
  // them to their respective variables
  cout << "Please enter your first number:\n";
  cin >> first_number;
  cout << "Please specify what operation you want carried out:\n";
  cout << "(Use + for addition, - for subtraction, ";
  cout << "* for multiplication and / for divsion.)\n";
  cin >> sum_operator;
  cout << "Please enter your second number:\n";
  cin >> second_number;

  cout << "Your sum is:\n";
  cout << first_number << " " << sum_operator << " " << second_number << "\n";

  // get output for the question by
  // checking the value of the operator
  // variable then carry out the relevant
  // operation
  if (sum_operator == '+')
  {
    answer = first_number + second_number;
  }
  else if (sum_operator == '-')
  {
    answer = first_number - second_number;
  }
  else if (sum_operator == '*')
  {
    answer = first_number * second_number;
  }
  else if (sum_operator == '/')
  {
    answer = first_number / second_number;
  }
  else
  {
    operator_is_present = false;
  }

  // output the answer to the user
  if (operator_is_present == true)
  {
    cout << "\n";
    cout << "Your answer is:\n";
    cout << answer;
    cout << "\n";
  }
  else
  {
    cout << "\n";
    cout << "ERROR: Please specify an operator!";
    cout << "\n";
  }

  return 0;
}