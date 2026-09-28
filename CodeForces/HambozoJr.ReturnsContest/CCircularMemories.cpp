#include <iostream>
#include <vector>
using namespace std;

int main() {
  int tc;
  long long a, b;
  cin >> tc;

  vector<long long> vec(tc);

  for (int x = 0; x < tc; x++) {
    cin >> a >> b; 
    vec.at(x) = (b + a) % a;
  }

  for (int x = 0; x < tc; x++) {
    cout << vec.at(x) << endl;
  }


  return 0;
}
