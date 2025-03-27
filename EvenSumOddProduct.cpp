#include <iostream>
#include <vector>

int main() {
  // Write code here 💖
  int evens =0;
  int odds =1;
  std::vector<int> num = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};
  for (int i = 0; i < num.size(); i++) {
  if (num[i] % 2 == 0) {
    // add when it’s even
    evens += num[i];
  }
  else {
    // multiply when it’s odd
    odds *= num[i];
  }
  
}
  std::cout << "The sum of even numbers: " << evens << "\n";
  std::cout << "The product of odd numbers: " << odds << "\n";
}
