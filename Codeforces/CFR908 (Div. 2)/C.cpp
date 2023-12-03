#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool checkInformant(int n, int k, vector<int>& b) {
    unordered_set<int> fixedPoints;

    // Find the fixed points of the array 'b'
    for (int i = 0; i < n; i++) {
        if (b[i] == i + 1) {
            fixedPoints.insert(i + 1);
        }
    }

    // Check if the number of fixed points is at most k
    return fixedPoints.size() < k;
}

int main() {
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        bool result = checkInformant(n, k, b);

        if (result) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}