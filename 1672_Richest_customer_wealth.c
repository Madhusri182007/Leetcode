int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int wealth=0;
    int max=0;
    for(int i=0;i<accountsSize;i++)
    {
        for(int j=0;j<accountsColSize[i];j++)
        {
             wealth+=accounts[i][j];
        }
        if(max<wealth)
        {
            max=wealth;
        }
        wealth=0;
    }
    return max;
}
