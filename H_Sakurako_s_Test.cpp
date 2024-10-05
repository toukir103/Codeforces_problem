#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1000000007;

// Function to process each test case
void processTestCase() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i];
    }

    // Sort the array
    sort(a.begin(), a.end());

    // For each query
    for (int x : queries) {
        int low = 0, high = n - 1;

        // Binary search to find the number of elements <= x
        while (low <= high) {
            int mid = (low + high) / 2;
            if (a[mid] <= x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        int numLessEqualX = low;
        int medianPos = (n - 1) / 2;
        int median = a[medianPos];

        if (numLessEqualX > medianPos) {
            median = 0;
        } else {
            // If `x` is greater than or equal to the median element
            median = a[medianPos] - (medianPos - numLessEqualX) / (x + 1);
            median = max(median, 0LL);
        }

        cout << median << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        processTestCase();
    }

    return 0;
}
