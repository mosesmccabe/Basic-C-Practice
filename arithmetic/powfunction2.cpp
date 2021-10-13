/****** Moses Mccabe   1/31/2015  (powfunction2.cpp) ******

 * This program calculates the area of a circle.
 * The formula for the area of a circle is Pi time
   the radius squared. pi is 3.14159.
 */

//FILES
#include<iostream>
#include<cmath> // must be use with the pow function
using namespace std;

int main()
{
 // DEFINE VARIABLE
 const double PI = 3.14159;    // const mean the value of pi cannot be change
 double area, radius;

 // INPUT AND OUTPUT...ASK USER TO ENTER RADIUS
 cout << "This program calculates the area of a circle.\n";
 cout << "Enter the radius of the circle: ";
 cin >> radius;

 // COMPUTATION
 area = PI * pow(radius,2.0);  // The arguments that are pass to the pow
                               // function must be double and the variable use
                               // to store pow return value should be defined as a double
// DISPLAY RESULT
 cout << "The area is " << area << endl;

 return 0;
}
