#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n);
        map<int, int> x_count, y_count;

        for (int i = 0; i < n; i++)
        {
            cin >> points[i].first >> points[i].second;
            x_count[points[i].first]++;
            y_count[points[i].second]++;
        }

        int result = 0;

        for (int i = 0; i < n; i++)
        {
            int x = points[i].first;
            int y = points[i].second;

            result += (x_count[x] - 1) * (y_count[y] - 1);
        }

        cout << result << endl;
    }

    return 0;
}
