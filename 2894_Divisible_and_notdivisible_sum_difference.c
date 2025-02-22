int differenceOfSums(int n, int m) {
   int a[n],num1=0,num2=0;
   for(int i=0;i<n;i++)
   {
    a[i]=i+1;
   } 
   for(int i=0;i<n;i++)
   {
    if(a[i]%m !=0)
    {
        num1=num1+a[i];
    }
    else
    {
        num2=num2+a[i];
    }
   }
   int diff;
   diff=num1-num2;
   return diff;
}
