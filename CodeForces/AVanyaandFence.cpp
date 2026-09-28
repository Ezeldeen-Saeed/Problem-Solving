#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    vector<int> vec;

    for (int x = n; x <= 0; x--) {
        cin >> vec.at(x);
    }

    for (int x : vec) {
        cout << x;
    }

    return 0;
}
