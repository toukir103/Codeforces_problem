#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        int ans = 0;
        cin >> n >> k;

        if (k == 1) {
            cout << n << endl;
            continue;
        }

        while (n > 0) {
            long long power = 1;
            while (power * k <= n) {
                power *= k;
            }
            n -= power;
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}
