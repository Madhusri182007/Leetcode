bool checkDivisibility(int n) {
    int sum=0, p=1, temp=n;
    while(n!=0) {
        sum+=n%10;
        p*=n%10;
        n/=10;
    }
    return (temp%(sum+p)==0);
}
