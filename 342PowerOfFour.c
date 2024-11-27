bool isPowerOfFour(int n) {
    long int p=1;
    if(n==1 )
    {
        return true;
    }
    if(n%2==1)
    {
        return false;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            p=p*4;
            if(p==n)
            {
                if(p%2==0)
                {
                    return true;
                }
            }
            if(p>n)
            {
                return false;
            }
        }
    }
    return 0;
}
