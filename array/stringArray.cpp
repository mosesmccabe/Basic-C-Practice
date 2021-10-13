/*  ***** Moses Mccabe *****   3/17/2015

    This program demonstrates the using string
    as array. (stringArray.cpp)

*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string planets[] = {"Mercury", "Venus", "Earth", "Mars",
                        "Jupiter", "Saturn", "Uranus",
                        "Neptune", "Pluto (a dwarf planet)"};

    cout << "Here is the planets:\n\n";

    // Display the value in the array
    for(int element = 0; element < 9; element++)
    {
        cout << planets[element] << endl;
    }
    cout << "\n\n";
}
