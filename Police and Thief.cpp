#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y; 
        cin >> x >> y;
        if (x == y) {
            cout << 0 << endl;
        } else {
            int distance = abs(x - y);
            cout << distance << endl;
        }
    }
    return 0;
}
