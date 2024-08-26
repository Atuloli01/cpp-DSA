#include <iostream>
using namespace std;
int main() {
  int number;
  cout << "enter your number: ";
  cin >> number;
  for (int row = 0; row < number; row++) {
    for (int column = 0; column <= row; column++) {
      if (column == 0 || column == row || row == number - 1) {
        cout << column + 1 << " ";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}
