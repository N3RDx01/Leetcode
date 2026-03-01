int reverse(int x){
    
   long z=0;
    while(x!=0){
        int y=x%10;
        x/=10;
        z=z*10+y;
        if (z > 2147483647 || z < -2147483648) return 0;
    }

    return z;
}