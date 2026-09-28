#include <iostream>
#include <vector>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  vector<string> vec(tc), res(tc);

  for (int x = 0; x < tc; x++) {
    cin >> vec.at(x); 
  }

  bool flag = true;
  for (int x = 0; x < tc; x++) {
    flag = true;
    while(!vec.at(x).empty()) {
      size_t i = vec.at(x).find('_');
      if (i == string::npos) {
        if (flag) {
          res.at(x).push_back(tolower(vec.at(x)[0]));
          break;
        } else {
          res.at(x).push_back(tolower(vec.at(x)[vec.at(x).length() - 1]));
          break;
        }
      }
      if (flag) {
        res.at(x).push_back(tolower(vec.at(x)[0]));
      } else {
        res.at(x).push_back(tolower(vec.at(x)[i - 1]));
      }
      flag = !flag;
      vec.at(x).erase(0, i + 1);
    }
  }

  for (string s : res) {
    cout << s << endl;
  }

  return 0;
}
