int addDigits(int num) {
    int t=num,sum=0,rem,i=1;
    while(i!=0)
    {
         while(t!=0)
        {
        rem=t%10;
        sum=sum+rem;
        t=t/10;
        }
         if(sum>=0 &&sum<=9)
        {
          i=-1;
        }
        else
        {
            t=sum;
            sum=0;
        }
        i++;
    }
    return sum;
}
