/*  The if Statement    ******* Moses Mccabe ******* 2/4/2015

  if Statement can conditionally execute a block of
  statements enclosed in braces.

   if(expression)
   {
         statement;
         statement;
         // Place as many statements here as necessary.
   }
   This prgram demonstrate an if statement executing
   a block of statement (ifStatement_testScore2.cpp)

*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 const int HIGH_SCORE =95; // A high score is 95 or greater
 int score1, score2, score3;
 double average;

 // Get the three test scores.
 cout << "Enter 3 test scores and I'll average them.\n";
 cout << "\n1 of 3 - Enter first test score: ";
 cin >> score1;
 cout << "2 of 3 - Enter second test score: ";
 cin >> score2;
 cout << "3 of 3 - Enter third test score: ";
 cin >> score3;

 // Calculate and display the average score.
 average = (score1 + score2 + score3)/3.0;
 cout << setprecision(1) << fixed << endl;
 cout << "Your average is " << average << endl;

 // If the average is high score, congratulate the user.
 if(average > HIGH_SCORE)
 {
    cout << "Congratulation! That's a high score!\n";
    cout << "This's a hight scors.\n";
    cout << "You deserve a pat on the back!\n";
 }


 return 0;

}
