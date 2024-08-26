// only steps to do that question
/* #include <iostream>
using namespace std;
int main() {
  int number;
  cin >> number;
  int start = number;
  for (int row = 0; row < number; row++) {
    int startNum = 1;
    for (int column = 0; column < start; column++) {
      // this will print left side in the pyramid
      if (column < number - row - 1) {
        cout << " ";
      } else {
        // cout << "*";
        cout << startNum;
        startNum++;
      }
    }
    start++; // 2nd step to print another side of palindrome pyramid...
    cout << endl;
  }
}
*/

// III step main code of this question
#include <iostream>
using namespace std;
int main() {
  int number;
  cin >> number;
  int start = number;
  for (int row = 0; row < number; row++) {
    int startNum = 1; // 2nd step part...
    for (int column = 0; column < start; column++) {
      // this will print left side in the pyramid
      if (column < number - row - 1) {
        cout << " ";
      } else if (column <= number - 1) {
        cout << startNum;
        startNum++;
      } else if (column == number) {
        startNum = startNum - 2;
        cout << startNum;
        startNum--;
      } else {
        cout << startNum;
        startNum++;
      }
    }
    start++; // 2nd step to print another side of palindrome pyramid...
    cout << endl;
  }
}
