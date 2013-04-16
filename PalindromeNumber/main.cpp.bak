#include <iostream>
using std::cin; using std::cout; using std::endl;

unsigned revert(unsigned num) {
  unsigned rev = 0;
  while (num) {
    rev = rev * 10 + num % 10;
    num /= 10;
  }
  return rev;
}

int main(void) {
  unsigned num;
  cin >> num;
  cout << (revert(num) == num) << endl;
}
