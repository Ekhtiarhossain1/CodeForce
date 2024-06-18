#include <iostream>
#include <vector>
using namespace std;

void solve() {
    char grid[8][8];

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 8; ++i) {
        bool redrow = true;
        for (int j = 0; j < 8; ++j) {
            if (grid[i][j] != 'R') {
                redrow = false;
                break;
            }
        }
        if (redrow) {
            cout << 'R' << endl;
            return;
        }
    }

    for (int j = 0; j < 8; ++j) {
        bool bluecolumn = true;
        for (int i = 0; i < 8; ++i) {
            if (grid[i][j] != 'B') {
                bluecolumn = false;
                break;
            }
        }
        if (bluecolumn) {
            cout << 'B' << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
