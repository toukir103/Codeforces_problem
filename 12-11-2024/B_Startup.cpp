// In the name of ALLAH

/*
||-------------------------------------------||
||                 Author :                  ||
||            Toukir Ahmed Abid              ||
|| Dept. of Computer Science and Engineering  ||
||         toukirahmed.th@gmail.com          ||
||           Date : 30 October 2024          ||
||            Time : 15:26:32                 ||
||-------------------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long ll;

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> values;
        for (int i = 0; i < k; i++)
        {
            int a, value;
            cin >> a >> value;
            values.push_back(value);
        }

        sort(values.rbegin(), values.rend());
        
        n = min(n, k); // n check
        // for (int i = 0; i < n; i++)
        // {
        //     cout << values[i] << endl;
        // }
        // cout << endl;
        
    
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += values[i];
        }
        cout << sum << endl;
    }

    return 0;
}
