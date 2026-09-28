#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
  
  int n, a, b;
  cin >> n;

  vector<pair<int, int>> vec(n);
  for (int x = 0; x < n; x++) {
    cin >> vec.at(x).first >> vec.at(x).second;
  }


  int cap, min;
  cap = min = vec.at(0).second;
  for (int x = 1; x < n; x++) {
    cap -= vec.at(x).first;
    cap += vec.at(x).second;
    
    if (cap > min) {
      min = cap;
    }
  }

  cout << min << endl;
  


  return 0;
}
