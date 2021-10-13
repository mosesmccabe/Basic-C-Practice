/* ***** Moses Mccabe ***** 3/18/2015

 This program find the highest values in a
 numeric array (findingHighestArray.cpp)

*/
#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 1000, 500, 200, 5000, 900, 7000, 2015,
                    47889,99999,10099,0,10, 8958647,50};
    int count;
    int highest;

    highest = numbers[0];
    for(count = 1; count < 15; count++)
    {
        if(highest < numbers[count])
        {
            highest = numbers[count];
        }
    }
    // Display Highest Value
    cout << "\nThe Highest Value in the\n"
         << "Numeric Array is " << highest << endl;
}
