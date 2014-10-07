#include <iostream>

using namespace std;

int main() {
  int n1, n2, max;
  cout << "Please input two numbers:";
  cin >> n1 >> n2;
  max = n1 > n2 ? n1 : n2;
  cout << "The max number is :" << max << endl;
  return 0;
}
