1int minPartitions(char* n) {
2    char max = '0';
3    for (int i = 0; n[i]; i++) {
4        if (n[i] > max) max = n[i];
5        if (max == '9') return 9;
6    }
7    return max - '0';
8}