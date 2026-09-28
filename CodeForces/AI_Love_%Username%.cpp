#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    vector<int> vec(n);

    for (int x = 0; x < n; x++) {
        cin >> vec.at(x);
    }

    int counter1 = 0;

    for (int x = 1; x < n; x++) {

        int bigger = 0;
        int smaller = 0;

        for (int y = 0; y < x; y++) {

            if (vec.at(x) > vec.at(y)) {
                bigger++;
            }

            if (vec.at(x) < vec.at(y)) {
                smaller++;
            }
        }

        if (bigger == x || smaller == x) {
            counter1++;
        }
    }

    cout << counter1 << endl;

    return 0;
}
