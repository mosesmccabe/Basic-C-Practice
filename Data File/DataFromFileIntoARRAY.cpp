/* **** Moses Mccabe ****  3/19/2015

  This program reads data from a file into
  an array (DataFromFileIntoARRAY.cpp)

*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    double numbers[ARRAY_SIZE];
    int count = 0;
    ifstream inFile;

    // Open the file.
    inFile.open("personnel.dat");

    // Read the number from the file into the array.
    while((count < ARRAY_SIZE) && (inFile >> numbers[count]))
    {
        count++;
    }

    // Close the file.
    inFile.close();

    // Display the numbers read.
    cout << "The numbers are" << endl;
    for (count = 0; count < ARRAY_SIZE; count++)
    {
        cout << numbers[count] << " " << count << endl;

    }
    return 0;
}





















































