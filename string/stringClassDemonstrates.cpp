/*
* This Program demonstrates the string class (stringClassDemonstrates.cpp)
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
 string firstName, lastName, state, city;
 double hour, rate, Sum;

 //INPUT AND OUTPUT
 cout << "Enter your first name: ";
 cin >> firstName;
 cout << "Enter your last name: ";
 cin >> lastName;
 cin.ignore();
 cout << "Enter your current city: ";
 getline(cin,city);
 cout << "Which state are you in: ";
 cin >> state;
 cout << "How many hours did you work? ";
 cin >> hour;
 cout << "How much do you get paid an hour ";
 cin >> rate;

 //COMPUTATION
 Sum  = rate * hour;

 //DISPLAY RESULT
 cout << "\nname: " << firstName << " " <<lastName << endl;
 cout << "city: " << city << endl;
 cout << "state: " << state << endl;
 cout << "\Your work " << hour << " hour at a rate of " << rate << " per hour." <<endl;
 cout << "You have earned $ " << Sum << " dollars" << endl;

 return 0;
 }
