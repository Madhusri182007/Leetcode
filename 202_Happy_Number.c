bool isHappy(int n) {
    int rem,sum=0;
    if(n==1)return true;
    while(n>6)
    {
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem*rem;
            n=n/10;
        }
        if(sum==1)
        {
            return true;
        }
        else
        {
            n=sum;
            sum=0;
        }
    }
   return false;
}
