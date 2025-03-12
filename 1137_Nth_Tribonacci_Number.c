int tribonacci(int n) {
     if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
     if(n==2)
    {
        return 1;
    }
    int result[n+1];
    int a=0;
    result[0]=a;
    int b=1;
    result[1]=b;
    int c=1;
    result[2]=c;
    int res;
    for(int i=3;i<=n;i++)
    {
      res=result[i-1]+result[i-2]+result[i-3];
      result[i]=res;
    }
    return res;
 
}
