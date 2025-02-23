int fib(int n){
    if(n==0)
    {return 0;}  
    int res;
    int Num1=0;
    int Num2=1;
    int arr[n+1];
    arr[0]=Num1;
    arr[1]=Num2;
    for(int i=2;i<=n;i++)
    {
        res=Num1+Num2;
        arr[i]=res;
        Num1=Num2;
        Num2=res;
    }
    int sum=arr[n];
   
    return sum;
}
