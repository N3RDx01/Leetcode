1int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
2    int* ans = (int*)malloc(2 * sizeof(int));
3    
4    for(int i = 1; i < numsSize; i++) {
5        for(int j = i; j < numsSize; j++) {
6            if(nums[j] + nums[j - i] == target) {
7                ans[0] = j - i;
8                ans[1] = j;
9                *returnSize = 2;
10                return ans;
11            }
12        }
13    }
14    
15    *returnSize = 0;
16    free(ans); 
17    return NULL;
18}