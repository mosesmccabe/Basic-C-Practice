/* **** Moses Mccabe ****  3/18/2015

 This program find the lowest values and it location
 in a numeric array (LowestLocationArray.cpp)

*/
#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {30,1000,500,200,5000,900,7000,2015,
                    47889,999,10099,200,105,895,50};
    int count;
    int lowest;
    int location;

    lowest = numbers[0];
    for(count = 1; count < 15; count++)
    {
        if(numbers[count] < lowest) // compare the first element with the rest
        {
            lowest = numbers[count];
            location = count + 1;
        }
        if(lowest == numbers[0])
        {
            location = 1;
        }
    }
    // Display Highest Value
    cout << "\nThe Lowest Value in the\n"
         << "Numeric Array is " << lowest
         << " and the location of the Lowest is " << location << endl;
}
