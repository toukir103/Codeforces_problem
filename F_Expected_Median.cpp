#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int mid = (k + 1) / 2;
        long long sum = 0;

        // Calculate the number of subsequences for which the median is 1
        vector<long long> prefixSum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + a[i];
        }

        for (int i = mid - 1; i < n; ++i) {
            int count1 = prefixSum[i + 1] - prefixSum[i - mid + 1];
            int count0 = mid - count1;

            if (count1 > 0) {
                long long numSubsequences = 1LL * (count1) * (count1 - 1) / 2;
                sum = (sum + numSubsequences) % MOD;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
