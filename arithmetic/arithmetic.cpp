/*
 * Doing Arithmetic but using system("cls") and getch(); to clear and pause the screen
 * (arithmetic.cpp)
 */
 #include<iostream>
 #include<conio.h>
 #include<stdlib.h> // must be include to use system("cls")
 #include<string>
 using namespace std;

 int main()


  string name;
  double firstNumber, secondNumber, thirdNumber;

  // output (cout) and input (cin)
  cout << "Enter Name: ";
  //cin.ignore();
  getline(cin,name);
  system("cls");



  cout << "Hello " << name << " this program do basic arithmetic. "
       << "meaning today we\'ll \nbe finding the sum, different, "
       << "product, quotient, and remainder of the number \nyou enter.\n";

  cout << "\nPlease any key to continue";
  getch();
  system("cls");  // this clear the screen once the user hit any key

  cout << "Enter first number <real number, 1 of 3>: ";
  cin >> firstNumber;
  system ("cls");
  cout << "Enter second number <real number, 2 of 3>: ";
  cin >> secondNumber;
  system ("cls");
  cout << "Enter third number <real number, 3 of 3>: ";
  cin >> thirdNumber;
  system ("cls");

  // Display user input
  cout << "You enter " << firstNumber << ", " << secondNumber << ", and " << thirdNumber << ".\n";

  // Computation and result
  cout << "\n\t\t\"ADDITION\"\n";
  cout << "The Sum of " << firstNumber << " + " << secondNumber << " + " << thirdNumber << " = "
       << firstNumber+secondNumber+thirdNumber << "\n";

  cout << "\n\t\t\"SUBTRACTION\"\n"; // "\n" end line and "\t" tag
  cout << "The Different of " << firstNumber << " - " << secondNumber << " - " << thirdNumber << " = "
       << firstNumber-secondNumber-thirdNumber << "\n";

  cout << "\n\t\t\"MULTIPLICATION\"\n";
  cout << "The Different of " << firstNumber << " * " << secondNumber << " * " << thirdNumber << " = "
       << firstNumber*secondNumber*thirdNumber << "\n";

  cout << "\n\t\t\"DIVISION\"\n";
  cout << "The Quotient of " << firstNumber << " / " << secondNumber << " / " << thirdNumber << " = "
       << firstNumber/secondNumber/thirdNumber << endl;

  cout << "\n\n\nPlease any key to continue";
  getch(); // this pause the system  screen
  system("cls"); // this clear the system screen

  // New out put and input statement for Remainder
  int newfirst, newsecond, newthird;
  cout << "\nPlease enter integer value and absolute value to use "
       << "the Remainder function \nof this calculation\n";
  cout << "\nEnter first integer: ";
  cin >> newfirst;
  cout << "Enter second integer: ";
  cin >> newsecond;
  cout << "Enter third integer: ";
  cin >> newthird;

  cout << "\n\n\t\"Remainder\"\n";
  cout << "The Remainder of " << newfirst << ", " << newsecond << ", and " << newthird << " is "
       << newfirst%newsecond%newthird << "\n";

cout << "\n\nPlease any key to continue";
 getch();         // this pause the command window
 system("cls");   // this clear the command Window

 // display message
 cout << " Thinks for using this basic calculation."
      << " Have a awesome day.\n";
 cout <<"\nHit any key to exit: ";
 getch();

 return 0;
 }
