#include <iostream>
#include <vector>
using namespace std;

int main() {
  int w, l;
  cin >> w >> l;

  vector<vector<char>> h(l, vector<char>(w));
  vector<vector<bool>> allowed(l, vector<bool>(w, true));
  vector<string> result;

  for (int y = 0; y < l; y++) {
    for (int x = 0; x < w; x++) {
      cin >> h.at(y).at(x); 
      if (h.at(y).at(x) == '#') {
        for (int dy = -1; dy <= 1; dy++) {
          for (int dx = -1; dx <= 1; dx++) {
            int ny = y + dy;
            int nx = x + dx;

            if (ny >= 0 && ny < l &&
                nx >= 0 && nx < w) {
              allowed.at(ny).at(nx) = false;
            }
          }
        }
      }
    }
  }

  int counter = 0;
  for (int y = 0; y < l; y++) {
    for (int x = 0; x < w; x++) {
      if (allowed.at(y).at(x) == true) {
        counter++;
        result.push_back("(" + to_string(x) + ", " + to_string(y) + ")");
      }
    }
  }
  
  cout << counter << endl;
  for (string x : result) {
    cout << x << endl;
  }

  return 0;
}
