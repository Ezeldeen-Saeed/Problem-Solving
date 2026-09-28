#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, h, minw = 0;
    cin >> n >> h;

    int i;
    for (int x = 0; x < n; x++) {
      cin >> i;
      if (i > h) {
        minw += 2;
      } else {
        minw += 1;
      }
    }

    cout << minw << endl;



    return 0;
}
