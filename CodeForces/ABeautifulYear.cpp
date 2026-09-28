#include <iostream>
#include <vector>
using namespace std;


int newNumVec(int n) {
  vector<int> temp;

  n++;
  int t = n;
  while (t > 0) {
    temp.push_back(t % 10);
    t /= 10;
  }

  bool unique = true;
  for (int x = 0; x < temp.size(); x++) {
    for (int y = x + 1; y < temp.size(); y++) {
      if (temp[x] == temp[y]) {
        unique = false; 
      }
    }
  }

  if (unique) {
    return n;
  } else {
    return newNumVec(n);
  }
}

int main() {
  int n;
  cin >> n;

  cout << newNumVec(n) << endl;

  return 0;
}
