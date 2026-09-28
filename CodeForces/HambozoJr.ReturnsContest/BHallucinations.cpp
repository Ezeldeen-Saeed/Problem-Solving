#include <iostream>
#include <vector>
using namespace std;

int main() {
  int tc, n;
  n = 0;
  cin >> tc;

  for (int x = 0; x < tc; x++) {
    cin >> n;
    vector<int> k(n);
    for (int y = 0; y < n; y++) {
      cin >> k.at(y); 
    }

    int counter = 0;
    for (int y = 0; y < n; y++) {
      if (k.at(y) == 1) {
        counter++;
      }
    }

    if (counter == n) {
      cout << "Sekket El-salama!" << endl;
    } else {
      cout << "Ma3lesh ya 7ag ... El-sekka sa3ba" << endl;
    }

  }



  return 0;
}
