#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, counter = 0;
  cin >> n;

  vector<string> stat(n);

  for (int x = 0; x < n; x++) {
    cin >> stat.at(x);
  }

  for (int x = 0; x < n; x++) {
    for (int y = 0; y < stat.at(x).size(); y++) {
      if (stat.at(x).at(y) == '+') {
        counter++; 
        break;
      } else if (stat.at(x).at(y) == '-') {
        counter--;
        break;
      }
    }
  }
  
  cout << counter << endl;

  return 0;
}
