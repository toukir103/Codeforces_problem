// In the name of ALLAH

#include <iostream>
#include <algorithm>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Manual sorting without using extra memory
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }

    cout << s << endl;

    return 0;
}
