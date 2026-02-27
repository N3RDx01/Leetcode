1#include<math.h>
2int pivotInteger(int n) {
3    int total=0;
4    int x =0;
5    total=n*(n+1)/2;
6    x=sqrt(total);
7
8    if(x*x==total){
9        return x;
10        }
11    else {
12        return -1;
13    }
14}
15