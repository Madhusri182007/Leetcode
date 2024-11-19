int mySqrt(int x) 
{
    int i,p=1;
    for(i=1;i<=x/2;i++)
    {
        p=i*i;
        if(p==x)
        {
            return i;
        }
        else if(p>x)
        {
            return --i;
        }
    }
    return 0;
}
