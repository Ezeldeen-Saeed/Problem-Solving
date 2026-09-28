#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, a, x, b, y;
  cin >> n >> a >> x >> b >> y;

  int td = (x - a + n) % n;
  int tv = (b - y + n) % n;

  for (int t = 0; t <= min(td, tv); t++) {
    int d = (a - 1 + t) % n + 1;
    int v = (b - 1 - t + n) % n + 1;

    if (d == v) {
      cout << "YES\n";
      return 0;
    }
  }

  cout << "NO\n";



  return 0;
}
