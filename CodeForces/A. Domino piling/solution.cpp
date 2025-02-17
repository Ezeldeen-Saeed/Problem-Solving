#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n, board_area;

    cin >> m >> n;

    board_area = m * n;

    cout << ceil(board_area / 2);

    return 0;
}
