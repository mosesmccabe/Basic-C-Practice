/* ****** Moses Mccabe ******   2/10/2015   (logicalNOT.cpp)

   This program demonstrates the logical ! operator.

   * The logical NOT operation take an operand and reverses
     its truth or falsehood
     - if the expression is true, the ! operator return false
     - if the expression is false, the ! operator return true

*/
#include<iostream>
using namespace std;

int main()
{
 // constants for minimim income and years
 const double MIN_INCOME = 35000.0;
 const int MIN_YEARS = 5;

 double income;
 int year;

 // Get user annual income
 cout << "What is your annual income? ";
 cin >> income;

 // Get the number of year at the current job.
 cout << "How many years have you worked at\n"
      << "your current job? ";
 cin >> year;

 // Determine the user's loan qualifications.
 if (!(income >= MIN_INCOME || year >= MIN_YEARS))
 {
    cout << "\nYou must earn at least $ "
         << MIN_INCOME << " or have been\n"
         << "employed more than " << MIN_YEARS << " year.\n\n";
 }
 else
 {
    cout << "\nYou qualify.\n\n";
 }
 return 0;
}
