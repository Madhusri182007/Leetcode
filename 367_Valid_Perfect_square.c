bool isPerfectSquare(int num) {
   long int p=1,i;
   if(num==1)return true;
    for(i=1;i<=num/2;i++)
    {
        p=i*i;
        if(p==num)
        {
            return true;
            break;
        }
    }
    if(p!=num)
    {
        return false;
    }
    return 0;
}
