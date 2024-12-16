bool isPowerOfThree(int n) {
    if(n==1)
    {
        return true;
    }
    if(n%2==0 || n<0)
    {
        return false;
    }
    long long int p=1;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=1;j++)
        {
            p=p*3;
            if(p==n)
            {
                if(p%2==1)
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
