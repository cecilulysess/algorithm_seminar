#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <string>
using std::string;

string foo(const string& input) {
  int size = input.size() * 2 - 1;
  int* count = new int[size];
  for ( int i = 0; i < size; ++i )
    count[i] = !(i % 2);

  for ( int i = 0; i < size; ++i ) {
    int left  = i/2 - !(i%2);
    int right = i/2 + 1;

    while ( left >= 0 and right <= size/2 and
        input[left] == input[right] ) {

      count[i] += 2;
      --left;
      ++right;
    }
  }

  /* Find max point and construct output string */
  int maxPoint = 0;
  for ( int i = 1; i < size; ++i )
    if ( count[i] > count[maxPoint] ) maxPoint = i;

  int start = maxPoint/2 - (count[maxPoint]-1)/2;

  string output;

  for ( int i = 0; i < count[maxPoint]; ++i )
    output += input[start+i];

  delete count;
  return output;
}

int main(void) {
  string input;
  cin >> input;

  cout << foo(input) << endl;
}
