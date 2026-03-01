1int minPartitions(char* n) {
2    char max_digit = '0';
3    for (int i = 0; n[i] != '\0'; i++) {
4        if (n[i] > max_digit) {
5            max_digit = n[i];
6        }
7        if (max_digit == '9') return 9;
8    }
9    return max_digit - '0';
10}