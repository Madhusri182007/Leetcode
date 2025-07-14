int maxProduct(int* nums, int numsSize) {
    if (numsSize == 0)
    { return 0;}

    int max = nums[0];
    int max_curr = nums[0];
    int min_curr = nums[0];

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] < 0)
        {
            int temp = max_curr;
            max_curr = min_curr;
            min_curr = temp;
        }
        max_curr= (nums[i] > max_curr * nums[i]) ? nums[i] : max_curr * nums[i];
        min_curr= (nums[i] < min_curr * nums[i]) ? nums[i] : min_curr * nums[i];

        if (max_curr > max) {
            max= max_curr;
        }
    }
    return max;
}
