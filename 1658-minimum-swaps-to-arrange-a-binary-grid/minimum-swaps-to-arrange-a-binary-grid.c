#include <stdlib.h>

int minSwaps(int** grid, int n, int* gridColSize) {
    int z[n], swaps = 0;
    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = n - 1; j >= 0 && !grid[i][j]; j--) c++;
        z[i] = c;
    }
    for (int i = 0; i < n; i++) {
        int target = n - 1 - i, found = -1;
        for (int j = i; j < n; j++) {
            if (z[j] >= target) { 
                found = j; 
                break; 
            }
        }
        if (found == -1) return -1;
        swaps += found - i;
        int tmp = z[found];
        for (int k = found; k > i; k--) z[k] = z[k-1];
        z[i] = tmp;
    }
    return swaps;
}