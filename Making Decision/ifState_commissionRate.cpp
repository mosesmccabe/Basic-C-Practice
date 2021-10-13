/* ******** Moses Mccabe ******* 2/4/2015

  this program calculate commission rate (ifState_commissionRate.cpp)

*/
#include<iostream>
using namespace std;

int main()
{
 int sale;
 double bonus = 0, commissionRate = 0;

 cout << "Enter amount of sale: ";
 cin >> sale;

 if(sale > 50000)
  {
   commissionRate = 0.25;
   bonus = 250;
   cout << "Your Commission Rate is " << commissionRate << endl;
   cout << "Your bonus is " << bonus << endl;
  }
  cout << "Sorry you didn't reach you sale goal (:\n";
}
