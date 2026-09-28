#include<iostream>
using namespace std;

int main() {
  int n, k, r;
  cin >> n >> k;

  r = 240 - k;
  while (true) {
    if (n % 2 == 1) {
      if (n / 2 < r) {
        n /= r; 
      }
    } 
  }

  return 0;
}
