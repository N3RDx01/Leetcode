int minPartitions(char* n) {
    char max = '0';
    for (int i = 0; n[i]; i++) {
        if (n[i] > max) max = n[i];
        if (max == '9') return 9;
    }
    return max - '0';
}