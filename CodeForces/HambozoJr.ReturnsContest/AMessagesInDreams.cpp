#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> vec(n);
  for (int x = 0; x < n; x++) {
    cin >> vec.at(x);
  }

  for (int x = 0; x < vec.size() -1; x++) {

    if (vec.at(x) == vec.at(x + 1) + 1 || vec.at(x) == vec.at(x + 1) - 1) {
      vec.erase(vec.begin() + x);
      vec.erase(vec.begin() + x + 1);
    }
  }

  if (vec.empty()) {
    cout << "Rest in peace ... Mom." << endl;
    return 0;
  }

  for (int x = 0; x < vec.size(); x++) {
    while (vec.at(x) > 0) {
      if (vec.at(x) % 10 == 2) {
        cout << "Rest in peace ... Mom." << endl;
        return 0;
      }
      vec.at(x) /= 10;
    }
  }

  cout << "Rot in hell, Zamlooka!" << endl;

  return 0;
}
