#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a1;
        cin >> n >> a1;

        // Calculate the minimum difference |a1 - i| where i is the index
        int result = min(a1 - 1, n - a1);
        cout << result << endl;
    }
    return 0;
}
