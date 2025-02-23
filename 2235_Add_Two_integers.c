int sum(int num1, int num2) {
    if(num1>0 && num2>0)
    {
        return num1+num2;
    }
    else if(num1<0 && num2>0)
    {
        int c;
        c=num1+num2;
        return c;
    }
    else if(num1<0  && num2<0)
    {
        int c;
        c=-(-(num1)+(-(num2)));
        return c;
    }
    else if(num1>0 && num2<0)
    {
        int c;
        c=num1+num2;
        return c;
    }
    else if(num1==0 && (num2>0 || num2<0))
    {
        return num2;
    }
    else if(num2==0 && (num1>0 || num1<0 ))
    {
        return num1;
    }


    return 0;
}
