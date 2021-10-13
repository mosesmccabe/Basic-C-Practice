/* (string3.cpp)
 * This program stores your name, address, and phone number
 * by using string, char, and double.
 *
 * Section 2.8 page 53 question 2.17
 - by Moses Mccabe * 1/26/2015
 */
 #include<iostream>
 #include<string>
 using namespace std;

 int main()
 {
  string name, address;
  double number;

  //cin.ignore();
  cout << "Enter your name: ";
  cin >> name;
  cin.ignore();
  cout << "Enter you address: ";
  //cin >> address;
  getline(cin,address);
  cout << "Enter your number: ";
  cin >> number;

  // DISPLAY output
  cout << "Hello " << name << endl;
  cout << "Your Address is " << address << endl;
  cout << "Your Phone Number is " << number << endl;
  cout << "You're Awesome :)" << endl;
 }
