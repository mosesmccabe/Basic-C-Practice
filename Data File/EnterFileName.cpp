/* **** Moses Mccabe **** 3/19/2015

   This program let the user enter a filename.
   (EnterFileName.cpp)

*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream inFile;
    string   filename;
    int      number;

    // Get the filename from the user
    cout << "Enter file name: ";
    cin >> filename;


    // Open the file.
    inFile.open(filename.c_str());

    // If the file successfully opened. process it.
    if(inFile)
    {
        // Read the number from the file
        // and display them.
        while(inFile >> number)
        {
            cout << number << endl;
        }

        // Close the file.
        inFile.close();
    }
    else
    {
        // Display an error message.
        cout << "Error opening the file.\n";

    }
    return 0;
}
