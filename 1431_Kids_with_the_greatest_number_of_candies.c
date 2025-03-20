bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool *arr = (bool*)malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;
    int max = -1;
    for (int i = 0; i < candiesSize; i++)
    {
        if (candies[i] > max)
        {
            max = candies[i];
        }
    }

    for (int i = 0; i < candiesSize; i++)
    {
        if (candies[i] + extraCandies >= max)
        {
            arr[i] = true;
        }
        else 
        {
            arr[i] = false;
        }
    }
    return arr;
}
