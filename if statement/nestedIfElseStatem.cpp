/*  ******** Moses Mccabe ********  2/9/2015

 * Nested if statements are use to test more
   than one condition


  This program demonstrates the nested if else statement
  (nestedIfElseStatem.cpp)

*/
#include<iostream>
using namespace std;

int main()
{
 char employed,    // currently employed, Y or N
      recentGrad;  // Recent graduate, Y or N

 // Is the user employed and a recent graduate?
 cout << "Answer the following questions\n";
 cout << "with either Y for Yes or N for No.\n";
 cout << "\nAre you employed? ";
 cin >> employed;
 cout << "Have you graduated from college \n"
      << "in the past two year ";
 cin >> recentGrad;

 // Determine the user's loan qualifications.
 if (employed == 'Y')
 {
     if (recentGrad == 'Y')  // Nested if
     {
         cout << "\nYou qualify for the special "
              << "interest rate.\n";
     }
     else // Not a recent grad, by employed
     {
         cout << "\nYou must have graduated from \n"
              << "college in the past two year\n"
              << "to qualify.\n";
     }



 }
 else // Not employed
 {
     cout << "\nYou must be employed to qualify.\n";
 }


return 0;

}
