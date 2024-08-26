#include <iostream>
using namespace std;
int main() {
  int number;
  cin >> number;
  int start = number;
  for (int row = 0; row < number; row++) {
    int startNum = 1;
    for (int column = 0; column < start; column++) {
      if (column < number - row - 1) {
        cout << " ";
      } else {
        // cout << "*";
        cout << startNum;
        startNum++;
      }
    }
    cout << endl;
  }
}


// CASE II
#include <iostream>
using namespace std;
int main() {
  int number;
  cin >> number;
  int start = number;
  for (int row = 0; row < number; row++) {
    int startNum = 1;
    for (int column = 0; column < start; column++) {
      if (column < number - row - 1) {
        cout << " ";
      } else {
        // cout << "*";
        cout << startNum << " ";
        startNum++;
      }
    }
    cout << endl;
  }
}
