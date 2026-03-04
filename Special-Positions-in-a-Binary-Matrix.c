1int numSpecial(int** mat, int matSize, int* matColSize) {
2    int r = matSize, c = matColSize[0], res = 0;
3    int row[101] = {0}, col[101] = {0};
4
5    for (int i = 0; i < r; i++)
6        for (int j = 0; j < c; j++)
7            if (mat[i][j]) { row[i]++; col[j]++; }
8
9    for (int i = 0; i < r; i++)
10        if (row[i] == 1)
11            for (int j = 0; j < c; j++)
12                if (mat[i][j] && col[j] == 1) res++;
13
14    return res;
15}