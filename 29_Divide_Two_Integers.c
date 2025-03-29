int divide(int dividend, int divisor) {
    if(dividend==INT_MIN && divisor==-1)
    {
        return INT_MAX;
    }
    if(dividend==divisor)
    {
        return 1;
    }
    else
    {
        int r;
        r=dividend/divisor;
        return r;
    }
}
