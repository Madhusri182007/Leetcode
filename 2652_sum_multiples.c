int sumOfMultiples(int n) {
   int a[n],sum=0;
   for(int i=0;i<n;i++)
   {
    a[i]=i+1;
   } 
   for(int i=0;i<n;i++)
   {
    if(a[i]%3==0 || a[i]%5==0 ||a[i]%7==0)
    {
        sum=sum+a[i];
    }
   }
   return sum;
}
