/*
 * Sum from 1 to a given upperbound and compute the average (SumNumbers.cpp)
 */
 #include<iostream>
 using namespace std;

 int main()
 {
  int sum = 0; //store the accumulated sum
  int upperbound;
  cout << "Enter the upperbound: ";
  cin >> upperbound;

  // Sum from 1 to the upperbound
  for (int number = 1; number <= upperbound; ++number){
      sum = sum + number;
      }
      cout << "Sum is " << sum <<"\n";
      cout << "Average is " << (double)sum / upperbound << endl;

      // Sum only the out numbers
      int count = 0;  // counts of odd numbers
      sum = 0;        // reset sum
      for (int number = 1;number <= upperbound; number=number+2){
          ++count;
          sum = sum + number;
          }
  cout << "Sum of odd numbers is " << sum << endl;
  cout << "Average is " << (double)sum /count << endl;

  return 0;
 }
