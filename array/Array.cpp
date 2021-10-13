/*  ****** Moses Mccabe ******   3/16/2015

   This program asks for the number of hours worked
   by six employees. It stores the values in an
   array. (Array.cpp)

   ~ Array - allow you to store and work with multiple
             values of the same data type.

*/
#include<iostream>
using namespace std;

int main()
{
   const int NUM_EMPLOYEES = 6;
   int hour[NUM_EMPLOYEES];

   // Get the hours worked by each employee.
   cout << "Enter the hours worked by "
        << NUM_EMPLOYEES << " employees: ";
   cin >> hour[0];
   cin >> hour[1];
   cin >> hour[2];
   cin >> hour[3];
   cin >> hour[4];
   cin >> hour[5];

   // Display results
   cout << "\nThe hours you enter are:\n";
   cout << "  " << hour[0] << endl;
   cout << "  " << hour[1] << endl;
   cout << "  " << hour[2] << endl;
   cout << "  " << hour[3] << endl;
   cout << "  " << hour[4] << endl;
   cout << "  " << hour[5] << endl;

return 0;
}
