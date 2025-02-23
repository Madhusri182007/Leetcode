int countEven(int num) {
   int sum=0,r,n= 0;
   int count=0;
   if(num<=10)
   {
   for(n=2;n<=num;n+=2)
   {
    if(n%2==0)
    {
        count++;
    }
   }
   return count;
   }
   count=0;
   for(int i=2;i<10;i+=2)
   {
    if(i%2==0)
    {
        count++;
    }
   }
   for(int i=10;i<=num;i++)
   {
    sum=0;
    n=i;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(sum%2==0)
    {
        count++;
    }
   }
   return count;
}
