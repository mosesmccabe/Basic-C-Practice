/* **** Moses Mccabe ****  3/18/2015
 This program find the lowest values in a
 numeric array (findingLowestArray.cpp)

*/
#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {30,1000,500,200,5000,900,7000,2015,
                    47889,99999,10099,20,15, 8958647,50};
    int count;
    int highest;

    highest = numbers[0];
    for(count = 1; count < 15; count++)
    {
        if(highest > numbers[count]) // compare the first element with the rest
        {
            highest = numbers[count];
        }
    }
    // Display Highest Value
    cout << "\nThe Highest Value in the\n"
         << "Numeric Array is " << highest << endl;
}
