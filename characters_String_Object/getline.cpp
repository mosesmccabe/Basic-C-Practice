/*   Moses Mccabe  4/22/2014

    * This program demonstrates using the getline function
      to read character data into a string object.
      (getline.cpp)

*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name, city;

    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Enter the city you live in: ";
    getline(cin, city);

    // Display result
    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;

    return 0;
}
