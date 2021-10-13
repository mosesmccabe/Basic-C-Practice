/* **** Moses Mccabe ****  3/19/2015

  This program demonstrate detecting
  end of file. By using a while loop
  to read data from a file.
  (DetectingEndofFile_WhileLoop.cpp)

*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream inFile;
    int number;
    int arraySize = 0;
    string arr[arraySize];

    // Open the file.
    inFile.open("sales.txt");

    // Read the numbers from the file
    // and display them.
    while (inFile >> number)
    {
        string temp;
        for (int i = 0; i < arraySize; i++)
        {
            inFile >> temp;
            arraySize[i] = temp;
        }
        
        cout << number << endl;
    }
    // Close the file.
    inFile.close();

    return 0;
}



















































