/* Using String     ******** Moses Mccabe ********  2/3/2013

   This program demonstract the use of strict and few string function.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 string name, address;
 int number1, number2, number3;
 double convnumber, sum;

 cout << "Enter name: ";
 cin.ignore();
 cin >> name;
 getline(cin,name);
 cout << "Enter address: ";
 cin.ignore();
 cin >> address;
 getline(cin,address);


 cout << "Enter first number: ";
 cin >> convnumber;
 number1=(int)convnumber;
 cout << "Enter second number: ";
 cin >> convnumber;
 number2=(int)convnumber;
 cout << "Enter third number: ";
 cin >> convnumber;
 number3=(int)convnumber;

// computation
sum = number1 + number2 + number3;

cout << "Name: " << name << endl;
cout << "Address: " << address << endl;
cout << "The sum of " << number1 << "+ " << number2 << " + " << number3 << " = " << sum << endl;

return 0;
}



