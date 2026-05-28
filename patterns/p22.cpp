#include <iostream>
#include <algorithm>

int main() {
    int n = 7; // Size of the grid (7x7)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Find the minimum distance from any of the four edges
            int dist_top = i;
            int dist_bottom = n - 1 - i;
            int dist_left = j;
            int dist_right = n - 1 - j;

            // The layer number starts at 4 on the outside and decreases to 1 at the center
            int value = 4 - std::min({dist_top, dist_bottom, dist_left, dist_right});

            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}