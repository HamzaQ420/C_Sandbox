// 2.19.2025

#include "stdio.h"

int main() {
    const int X = 7; const int Y = X;

    int arr[X][Y] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}, {12, 13, 14, 15} };

    // North-East Traversal
    for (int x = 0; x < X; x++) {
        // The sum of the coordinates is equal to x. The amount of sum pairs for ANY number is itself plus 1.
        // The sum of the coordinates is EQUAL to the number being summed (i.e. 2 = (2, 0), (1, 1), (0, 2)).
        for (int pair = 0; pair < x + 1; pair++) {
            // Getting the x-coordinate, then using it to find the y-coordinate.
            int x_coord = x - pair; int y_coord = x - x_coord;
            printf("%d ", arr[x_coord][y_coord]);
        } printf("\n");
    } return 0;
}
