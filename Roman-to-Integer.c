1int getVal(char c) {
2    switch (c) {
3        case 'I': return 1;
4        case 'V': return 5;
5        case 'X': return 10;
6        case 'L': return 50;
7        case 'C': return 100;
8        case 'D': return 500;
9        case 'M': return 1000;
10        default: return 0;
11    }
12}
13
14int romanToInt(char* s) {
15    int total = 0;
16    int i = 0;
17
18    while (s[i] != '\0') {
19        int current = getVal(s[i]);
20        int next = (s[i + 1] != '\0') ? getVal(s[i + 1]) : 0;
21        if (current < next) {
22            total -= current;
23        } else {
24            total += current;
25        }
26        i++;
27    }
28
29    return total;
30}