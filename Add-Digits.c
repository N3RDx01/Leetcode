1int addDigits(int num) {
2    
3    if (num < 10) {
4        return num;
5    } else {
6        while ( num >= 10) {
7            int sum = 0;
8            while (num > 0) {
9                sum+= num % 10;
10                num /= 10;
11            }
12            num = sum;
13        }
14    }
15    return num;
16}