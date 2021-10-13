#include <iostream>
#include <string>
using namespace std;


int main()
{
    string first, second, total;
    
    cout << "Enter two words: ";
    cin >> first >> second;
    total = first + " " + second;
    
    for (int i = total.length(); i >= 0; i--)
        cout << total[i];
    cout << endl;
        
cout << total << endl;
    
    return 0;
}