#include <iostream>
#include <vector>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  vector<int> results(tc);

  for (int x = 0; x < tc; x++) {
    int n, ans;
    cin >> n;
    
    ans = (n / 14) * 2;

    if (n % 14 >= 1)
      ans += 2;
    else
      ans += 1;

    results.at(x) = ans;
  }

  for (int x = 0; x < tc; x++) {
    cout << results.at(x) << endl;
  }

  return 0;
}
