#include <iostream>
#include <cstring>
using namespace std;

int main() {
  string pass, required;
  cin >> pass;

  for (char& c : pass)
    c = tolower(c);

  required = "steinhoa";
  for (int x = 0; x < required.length(); x++) {
    int pos = pass.find(required[x]);

    if (pos == string::npos) {
      cout << "No Password." << endl;
      return 0;
    }

    pass.erase(pos, 1);
  }


  cout << "Ha" << pass << "ostein" << endl;

  return 0;
}
