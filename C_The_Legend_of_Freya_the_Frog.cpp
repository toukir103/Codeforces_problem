#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the minimum number of moves
long long minimum_moves(long long x, long long y, long long k) {
    // Calculate the number of moves required in x and y directions
    long long moves_in_x = (x + k - 1) / k; // Equivalent to ceil(x / k)
    long long moves_in_y = (y + k - 1) / k; // Equivalent to ceil(y / k)

    // Calculate the total number of moves required
    return max(moves_in_x, moves_in_y) * 2 - 1;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        cout << minimum_moves(x, y, k) << endl;
    }

    return 0;
}
