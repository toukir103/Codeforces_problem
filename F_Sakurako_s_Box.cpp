#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

long long mod_inverse(long long a, long long m) {
    long long m0 = m, x0 = 0, x1 = 1;
    if (m == 1) return 0;
    while (a > 1) {
        long long q = a / m;
        long long t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}

long long solve(const vector<int>& a) {
    int n = a.size();
    long long sum = 0;
    long long sum_sq = 0;

    for (int x : a) {
        sum += x;
        sum_sq += (long long)x * x;
    }

    long long sum_products = (sum * sum - sum_sq) / 2;
    long long num_pairs = (long long)n * (n + 1) / 2;
    long long expected_value = (sum_products * mod_inverse(num_pairs, MOD)) % MOD;

    return expected_value;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(a) << endl;
    }

    return 0;
}
