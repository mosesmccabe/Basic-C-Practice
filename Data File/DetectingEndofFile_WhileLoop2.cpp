//* **** Moses Mccabe ****  3/19/2015

  This program demonstrate detecting
  end of file. By using a while loop
  to read data from a file.
  (DetectingEndofFile_WhileLoop2.cpp)

*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream inFile;
    int number1,number2;

    // Open the file.
    inFile.open("sales.txt", ios::in);

    // Read the numbers from the file
    // and display them.
    inFile >> number1, number2;
    while (!inFile.eof()) // checking for end of file
    {

        cout << number1 << "  " << number2 << endl;
        inFile >> number1, number2;

    }
    // Close the file.
    inFile.close();

    return 0;
}
