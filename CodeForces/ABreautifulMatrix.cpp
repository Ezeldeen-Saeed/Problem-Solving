#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int arr[5][5];

  int xr, yr;
  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
      cin >> arr[x][y];
      if (arr[x][y] == 1) { 
        xr = x + 1; yr = y + 1;
      }
    }
  }


  cout << abs(xr - 3) + abs(yr - 3);
  

  return 0;
}
