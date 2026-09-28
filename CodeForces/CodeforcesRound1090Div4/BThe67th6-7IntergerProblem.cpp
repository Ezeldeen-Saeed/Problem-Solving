#include <iostream>
#include <vector>
using namespace std;

int main() {
  int tc;
  cin >> tc;

  vector<vector<int>> v(tc, vector<int>(7));
  for (int x = 0; x < tc; x++) {
    for (int y = 0; y < 7; y++) {
      cin >> v.at(x).at(y);
    }
  }

  int temp;
  for (int x = 0; x < tc; x++) {
    for (int y = 0; y < 7; y++) {
      for (int z = y + 1; z < 7; z++) {
        if (v[x][y] > v[x][z]) {
          temp = v[x][y];
          v[x][y] = v[x][z];
          v[x][z] = temp;
        }
      }
    }
  }

  int sum;
  for (int x = 0; x < tc; x++) {
    sum = 0;
    for (int y = 0; y < 6; y++) {
      v[x][y] *= -1;
      sum += v[x][y];
    }
    sum += v[x][6];
    cout << sum << endl;
  }

  return 0;
}
