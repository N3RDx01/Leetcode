1#include <stdlib.h>
2
3int minSwaps(int** grid, int n, int* gridColSize) {
4    int z[n], swaps = 0;
5    for (int i = 0; i < n; i++) {
6        int c = 0;
7        for (int j = n - 1; j >= 0 && !grid[i][j]; j--) c++;
8        z[i] = c;
9    }
10    for (int i = 0; i < n; i++) {
11        int target = n - 1 - i, found = -1;
12        for (int j = i; j < n; j++) {
13            if (z[j] >= target) { 
14                found = j; 
15                break; 
16            }
17        }
18        if (found == -1) return -1;
19        swaps += found - i;
20        int tmp = z[found];
21        for (int k = found; k > i; k--) z[k] = z[k-1];
22        z[i] = tmp;
23    }
24    return swaps;
25}