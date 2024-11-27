bool canWinNim(int n) {
    if(n%4==0)
    {
        return false;
    }
    if(n==1 ||n==2 ||n==3||n%2==1)
    {
        return true;
    }
    if(n%3==0  || n%5==0 ||n%2==0)
    {
        return true;
    }
    return 0;
}
