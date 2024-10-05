#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, m;
        cin >> n;

        vector<int> vec(n);
        for (int x = 0; x < n; x++) {
            cin >> vec[x];
        }

        cin >> m;
        vector<string> vex(m);
        for (int x = 0; x < m; x++) {
            cin >> vex[x];
        }

        bool match = true;

        for (int x = 0; x < n; x++) {
            for (int j = x + 1; j < n; j++) {
                if (vec[x] == vec[j]) {
                    for (int i = 0; i < m; i++) {
                        if (vex[i][x] != vex[i][j]) {
                            cout << "NO" << endl;
                            vex.erase(vex.begin(), vex.begin() + i + 1);
                            m--;
                        } else {
                            cout << "YES" << endl;
                        }
                    }
                }
            }
        }

        t--;
    }
    
    return 0;
}
