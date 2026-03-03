1bool isPowerOfThree(int n) {
2    if(n<=0){
3        return false;
4    }
5    while(n%3==0){
6        n/=3;
7    }
8    return n==1;
9}