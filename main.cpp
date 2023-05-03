#include <iostream>
using namespace std;

int main() {
  int numbers[10] = {1, 3, 5, 6, 7, 2, 4, 6, 4, 13};
  for (int i = 9; i >= 0; i--) {
    cout << numbers[i] << " ";
  }
}
