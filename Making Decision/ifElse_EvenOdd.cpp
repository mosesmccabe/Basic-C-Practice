/*   ******** Moses Mccabe ******* 2/4/2015

  The if/else statement will execute one group of statement
  if the expression is true, or another group of statements
  if the expression is false.

  HERE IS ITS FORMAT:
  if(expression)
     statement or block
  else
     statement or block

 * This program uses th emodulus operator to determine
   if a number is odd or even. If the number is evenly
   evenly divisible by 2, it is even number.
   A remainder indicates it is odd.  (ifElse_EvenOdd.cpp)
*/
#include<iostream>
using namespace std;

int main()
{
 int number;

 cout << "\tEnter an integer and I'll tell you if it\n"
      << "\tis ODD or EVEN.\n";
 cout << "\nEnter an integer: ";
 cin >> number;

 if (number % 2 == 0)
    cout << number << " is even.\n";

 else
    cout << number << " is odd.\n";

return 0;
}
