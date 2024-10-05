#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        // Moves needed to reach x and y
        long long moves_x = (x + k - 1) / k; // equivalent to ceil(x / k)
        long long moves_y = (y + k - 1) / k; // equivalent to ceil(y / k)

        // Total moves required
        long long total_moves = moves_x + moves_y;

        // Adjust for the alternating move requirement
        // If total_moves is odd, it needs one more move to land on the exact point
        if (total_moves % 2 == 1) {
            total_moves += 1;
        }

        cout << total_moves << endl;
    }
    return 0;
}
