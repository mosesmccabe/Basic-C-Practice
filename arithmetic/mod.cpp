/* ***** Moses Mccabe *****  2/25/2015

  This program demonstrate the use of mod function

*/
#include<iostream>
using namespace std;

int main()
{
 float amount;
 int test1, temp;

 cout << "Enter a dollar amount: ";
 cin >> amount;

 // using the mod function
 amount = amount * 100;
 temp = amount;
if (temp/2000 > 0)
{
    temp = temp%2000;
    test1 = (int)amount/2000;
}

 // display results
 cout <<  amount << "/2000 the remainder is " << temp << endl;
 cout << test1 << " twenty." << endl;

 return 0;
}
