/*  ***** Moses Mccabe ******  3/1732015

   This program demonstrates the range-bases for loop.
   (ArrayForLoop.cpp)

*/
#include<iostream>
using namespace std;

int main()
{
    // Define an array of integers.
    int numbers[] = {10, 20, 30, 40, 50};

    // Difine the values in the array.
    for(int val = 0; val < 5; val++)
    {
      cout << "The next value is ";
      cout << numbers[val] << endl;
    }


return 0;
}
