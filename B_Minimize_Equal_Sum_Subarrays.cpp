#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void minimizeEqualSumSubarrays(int t, vector<vector<int>>& test_cases) {
    for (int i = 0; i < t; ++i) {
        vector<int>& p = test_cases[i];
        // Reverse the permutation
        reverse(p.begin(), p.end());

        // Print the result
        for (int j = 0; j < p.size(); ++j) {
            cout << p[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    vector<vector<int>> test_cases(t);

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        test_cases[i].resize(n);
        for (int j = 0; j < n; ++j) {
            cin >> test_cases[i][j];
        }
    }

    minimizeEqualSumSubarrays(t, test_cases);

    return 0;
}
