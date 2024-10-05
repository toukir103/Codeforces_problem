#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                bool nonDecreasing = true;
                for (int k = i; k < j; k++) {
                    if (v[k] > v[k + 1]) {
                        nonDecreasing = false;
                        break;
                    }
                }
                if (nonDecreasing) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
