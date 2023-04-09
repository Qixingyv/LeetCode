// Paolua 2023/04/09 两数相加 https://leetcode.cn/problems/two-sum/
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int index1,index2;
    for(index1 = 0;index1<numsSize;index1++)
    {
        for(index2 = index1+1;index2<numsSize;index2++)
        {
            if(nums[index1] + nums[index2] == target)
            {
                int* arr = (int*)malloc(2*sizeof(int));
                arr[0] = index1;
                arr[1] = index2;
                *returnSize = 2;
                return arr;
            }
        }
    }

    *returnSize = 0;
    return NULL;

}