#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 1000000007;

// ফাংশন যা কিভাবে GCD বের করতে হয় তা হিসাব করে
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// সমস্ত উপাদানের GCD বের করার ফাংশন
ll findGCD(const vector<int>& arr) {
    ll result = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        result = gcd(result, arr[i]);
        if (result == 1) {
            return 1; // GCD 1 হলে সবচেয়ে ছোটতম সংখ্যা সবসময় সম্ভব, তাই 1 ফিরিয়ে দিন
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // GCD বের করা
        ll g = findGCD(a);

        // সর্বোচ্চ mexk নির্ধারণ করা
        ll max_mexk = (k - 1) * g + 1;

        // ফলাফল প্রিন্ট করা
        cout << max_mexk << endl;
    }

    return 0;
}
