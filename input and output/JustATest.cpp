/* Just a quick test of code block
 * (JustATest.cpp)
 */
 #include<iostream>
// #include<conio.h>
 using namespace std;

 int main()
 {
  int integer1, integer2,sum;


  cout << "Enter first integer ";
  cin >> integer1;
  cout << "Enter first integer ";
  cin >> integer2;

  // computation
  sum = integer1 + integer2;

  // output
  cout << integer1 << " + " << integer2 << " = " << sum << endl;

  // run again
  cout <<"do you want to run again";
 // getch();

  return 0;
}
