1int reverse(int x){
2    
3   long z=0;
4    while(x!=0){
5        int y=x%10;
6        x/=10;
7        z=z*10+y;
8        if (z > 2147483647 || z < -2147483648) return 0;
9    }
10
11    return z;
12}