#include <iostream>
#include <cmath>

using namespace std;

long double factorial(long double n);

int main() {
  long double pi;
  long double intermediate = 0.0;
  int iterations;

  cout << "Number of iterations: ";
  cin >> iterations;

  for (int i = 0; i < iterations; i++) {
    intermediate += (pow(-1, i) * factorial((6 * i)) * (13591409 + 545140134 * i)) / (factorial(3 * i) * pow(factorial(i), 3) * pow(640320, 3*i + 1.5));
  } 
  pi = 1 / (12 * intermediate);
  cout << pi << "\n";
}


long double factorial(long double n) {
  if (n == 0.0 || n == 1.0) {
    return 1.0;
  } else {
    return n * factorial(n - 1.0);
  }
}
