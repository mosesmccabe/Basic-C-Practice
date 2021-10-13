/*
* Test arithemtic operations (TestArithmetics.cpp)
*/
#include<iostream>
using namespace std;

int main()
{
 int integer1, integer2;
 int sum, difference, product, quotient, remainder;

 //OUTPUT AND INPUT
 cout << "Enter first integer ";
 cin >> integer1;
 cout << "Enter second integer ";
 cin >> integer2;

 // COMPUTATION
 sum = integer1 + integer2;
 difference = integer1 - integer2;
 product = integer1 * integer2;
 quotient = integer1 / integer2;
 remainder = integer1 % integer2;

 //DISPLAY RESULTS
 cout << "\nThe Sum of " << integer1 << " and " << integer2 << " is " << sum << endl;
 cout << "The Difference of " << integer1 << " and " << integer2 << " is " << difference << endl;
 cout << "The Product of " << integer1 << " and " << integer2 << " is " << product << endl;
 cout << "The Quotient of " << integer1 << " and " << integer2 << " is " << quotient << endl;
 cout << "The Remainder of " << integer1 << " and " << integer2 << " is " << remainder << endl;

getch();
 //return 0;
 }
