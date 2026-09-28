#include <iostream>
#include <vector>
using namespace std;

int main() {

  int tc;
  cin >> tc;

  vector<int> vec(tc);


  for (int x = 0; x < tc; x++) {
    cin >> vec.at(x);
  }

  for (int x = 0; x < tc; x++) {
    if (vec.at(x) + 1 > 67) {
      cout << 67 << endl;
    } else {
      cout << vec.at(x) + 1 << endl;
    }
  }


  return 0;
}
