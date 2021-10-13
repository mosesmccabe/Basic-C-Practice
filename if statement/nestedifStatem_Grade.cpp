/*  ******** Moses Mccabe ********  2/10/2015   (nestedifStatem_Grade.cpp)

   This program demonstrates the nested if statement
   by displaying the use score
*/
#include<iostream>
using namespace std;

int main()
{
 const int gradeA = 90,
           gradeB = 80,
           gradeC = 70,
           gradeD = 60;
       float score;

 cout << "Enter you score and I will\n"
      << "display your score.\n";
 cout << "Enter your score: ";
 cin >> score;

 if (score >= gradeA)
 {
     cout << "Awesome, your grade is A\n\n";
 }
 else
 {
     if (score >= gradeB)
     {
         cout << "Good, your grade is B\n\n";
     }
     else
     {
         if (score >= gradeC)
         {
             cout << "You need to work hard\n"
                  << "your grade is C\n\n";
         }
         else
         {
             if (score >= gradeD)
             {
                 cout << "You need help\n"
                      << "Your grade is D\n\n";
             }
             else
             {
                 cout << "Your grade is F\n\n";
             }
         }
     }
  }

 return 0;

}
