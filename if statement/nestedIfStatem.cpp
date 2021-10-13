/*  ******** Moses Mccabe ********  2/9/2015

 * Nested if statements are use to test more
   than one condition


  This program demonstrates the nested if else statement
  (nestedIfStatem.cpp)

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
 if (employed == 'Y' || 'y')
 {
     if (recentGrad == 'Y' || 'y') // Nested if
     {
         cout << "You qualify for the special "
              << "interest rate.\n";

     }
  }
return 0;

}
