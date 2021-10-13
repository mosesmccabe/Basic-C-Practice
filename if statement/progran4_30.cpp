/*
 * Chapter 4 program 4-30
 * This program uses two variables with the same name number. <progran4_30.cpp>
 */
 #include<iostream>
 using namespace std;

 int main()
 {
 int number; // Define a variable numed number.

 cout << "Enter a number greater than zero: ";
 cin >> number;

 if(number > 0) // condition statement
 {
   int number; // Another variable named number.
   cout << "Now enter another number greater than zero: ";
   cin >> number;
   cout << "The second number you enter was " << number << endl;
 }
 cout << "Your first number was: " << number << endl;

 return 0;
 }
