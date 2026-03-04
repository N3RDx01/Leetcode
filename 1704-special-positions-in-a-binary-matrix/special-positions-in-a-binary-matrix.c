int numSpecial(int** mat, int matSize, int* matColSize) {
    int r = matSize, c = matColSize[0], res = 0;
    int row[101] = {0}, col[101] = {0};

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (mat[i][j]) { row[i]++; col[j]++; }

    for (int i = 0; i < r; i++)
        if (row[i] == 1)
            for (int j = 0; j < c; j++)
                if (mat[i][j] && col[j] == 1) res++;

    return res;
}