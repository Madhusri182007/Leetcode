int reverse(int x){
    long int t=x,r,s=0;
    while(t!=0)
    {
         if (s> INT_MAX / 10 || s< INT_MIN / 10) 
        {
         return 0;
        }
        r=t%10;
        s=(s*10)+r;
        t=t/10;
    }
    return s;
}
