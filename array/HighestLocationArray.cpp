/* **** Moses Mccabe ****  3/18/2015

 This program find the highest values and it location
 in a numeric array (HighestLocationArray.cpp)

*/
#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {30,1000,500,200,5000,900,7000,2015,
                    478,999,10099,20,15,895,950};
    int count;
    int highest;
    int location;

    highest = numbers[0];
    for(count = 1; count < 15; count++)
    {
        if(numbers[count] > highest) // compare the first element with the rest
        {
            highest = numbers[count];
            location = count+1;
        }
        if(highest == numbers[0])
        {
            location = 1;
        }
    }
    // Display Highest Value
    cout << "\nThe Highest Value in the\n"
         << "Numeric Array is " << highest
         << " and the location of the highest is " << location << endl;
}
