int minCostClimbingStairs(int* cost, int costSize) {
    int n1=cost[0],n2=cost[1],cur=0,c;
    for(int i=2;i<costSize;i++)
    {
        if(n1>=n2)
        {
            c=n2;
        }
        if(n2>=n1){c=n1;}
        cur=cost[i]+c;
        n1=n2;
        n2=cur;

    }
    if(n1>=n2)
    {
        c=n2;
    }
    if(n2>=n1){
    c=n1;}
    return c;
}
