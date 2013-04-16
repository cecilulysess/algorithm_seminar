#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

/* Here you have a rand5() function which can return a random number in 0 - 4 */
/* Now you are going to write a rand7() which can only call the function rand5() */

int rand5() {
  return (rand() % 5);
}

int rand7() {
}

int main(void) {
  srand( time(NULL) );
  int count[7];
  for ( int i = 0; i < 7; ++i )
    count[i] = 0;
  for ( int i = 0; i < 5000000; ++i )
    ++count[rand7()];
  for ( int i = 0; i < 7; ++i )
    cout << i << "\t" << count[i] << endl;
}
