#include <iostream>
using namespace std;

int main() {
  long long n;
  int c = 0;
  cin >> n;

  while (n > 0) {
    if (n % 10 == 4 || n % 10 == 7) {
      c++;
    }
    n /= 10;
  }

  if (c == 0) {
    cout << "NO" << endl;
    return 0;
  }

  while (c > 0) {
    if (c % 10 != 4 && c % 10 != 7) {
      cout << "NO" << endl;
      return 0;
    }
    c /= 10;
  }

  cout << "YES" << endl;

  return 0;
}
