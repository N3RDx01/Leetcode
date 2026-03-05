1int minOperations(char * s) {
2    int n = strlen(s);
3    int count = 0;
4
5    for (int i = 0; i < n; i++) {
6        if (s[i] != (i % 2 + '0')) {
7            count++;
8        }
9    }
10
11    return (count < n - count) ? count : n - count;
12}