/*  ****** Moses Mccabe *******  2/10/2015    (logicalAnd.cpp)

   This program demonstrates the && logical operator

   * logical AND required both expressions must be true

*/
#include<iostream>
using namespace std;

int main()
{
 char employed,  // Currently employed, Y or N
      recentGrad; // Recent Grad, Y or N

// Is the user employed and a recent graduate?
cout << "Answer the following questions\n"
     << "with either Y for Yes or N for No.\n";
cout << "Are you employed? ";
cin >> employed;
cout << "Have you graduated from college\n"
     << "in the past two years? ";
cin >> recentGrad;

// Determine the user's loan qualifications
if (employed == 'Y' && recentGrad == 'Y')
{
    cout << "You qualify for the special "
         << "interest rate.\n\n";
}
else
{
    cout << "You must be employed and have\n"
         << "graduated from college in the\n"
         << "past two years to qualify.\n\n";
}
return 0;
}
