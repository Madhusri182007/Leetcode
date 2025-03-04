int subtractProductAndSum(int n) {
    int p=1,s=0;
    int t=n,r;
    while(t!=0)
    {
         r=t%10;
        s=s+r;
        p=p*r;
        t=t/10;
    }
    int res;
    res=p-s;
    return res;
}
