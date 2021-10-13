/* ****** Moses Mccabe   1/31/2015    (multipleAssignmentValue.cpp) ********

 This program assign multiple/several variables to the same.
 *This is useful if a program has several variable
  such as a,b,c,and d, and each variabe needs to be assigned a value
  such as 12.   (page 104)

  */
  #include<iostream>
  using namespace std;

  int main(){
   int a = b = c = d = 12;

   cout << a << endl;
   cout << b << endl;
   cout << c << endl;
   cout << d << endl;

   return 0;
   }
