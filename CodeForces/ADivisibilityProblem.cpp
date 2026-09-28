#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t, a, b;
  a = b = 0;
  cin >> t;

  vector<int> outputs(t);

  for (int x = 0; x < t; x++) {
    cin >> a >> b;
    if (a % b == 0) {
      outputs.push_back(0);
    } else {
      outputs.at(x) = b - (a % b);
    }
  }

  for (int x = 0; x < t; x++) {
    cout << outputs.at(x) << endl;
  }

  return 0;
}
