#include <iostream>
#include <vector>
using namespace std;

int main() {
  int num;
  cin >> num;

  vector<string> words(num);

  for (int x = num -1; x >= 0; x--) {
    cin >> words.at(x); 
  }

  for (int x = num -1; x >= 0; x--) {
    if (words.at(x).length() > 10) {
      int counter = 0;
      for (int y = 1; y < words.at(x).length() -1; y++) {
        counter++; 
      }
      cout << words.at(x)[0] << counter << words.at(x)[words.at(x).length() -1] << endl;
    } else {
      cout << words.at(x) << endl;
    }
  } 

  return 0;
}
