#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; 
    cin >> t;
    while (t--) {
        int k; 
        cin >> k;

        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }

        
        for (int n = 1; n * n <= k; n++) { 
            if (k % n == 0) { 
                int m = k / n; 
                // যদি n এবং m উভয়ই তালিকায় থাকে
                if (find(a.begin(), a.end(), n) != a.end() && find(a.begin(), a.end(), m) != a.end()) {
                    cout << n << " " << m << endl; // উত্তর প্রিন্ট
                    break; // প্রথম পাওয়া উত্তর নিলেই চলে
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
