1bool isPalindrome(int x) {
2    long rem,sum=0,num;
3    num=x;
4    if(x<0)
5    return false;
6    else
7    {
8        while(x>0)
9        {
10           rem=x%10;
11           sum=(sum*10)+rem;
12           x=x/10;
13        }
14           if(sum==num)
15              return true;
16           else
17             return false;
18    }
19    
20}