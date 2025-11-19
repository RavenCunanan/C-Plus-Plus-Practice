#include <iostream>
int conversion(int x) {
  int Fahrenheit = 0;
  Fahrenheit = (x * 9/5) +32;
  return Fahrenheit;
}
int main() {
  std :: cout << conversion(0) << "F\n"; 
}
