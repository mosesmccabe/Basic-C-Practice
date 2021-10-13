/* using the pow function
* (powfunction.cpp)
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
double number1, number2, sum;
cout << "Enter first number: ";
cin >> number1;
cout << "Enter second number: ";
cin >> number2;

// Computation
sum = pow(number1,2.0) * number2;

// print results
cout << number1 << "^2 * " << number2 << " = " << sum;

return 0;

}
