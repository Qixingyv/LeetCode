// Paolua 2023/04/06  移除元素 题目链接：https://leetcode.cn/leetbook/read/array-and-string/cwuyj/

/*
    算法思想：
        1. 设置快，慢两个指针
        2. 遍历快指针，如果和val比较不相等，将快指针赋给慢指针，慢指针加1
        3. 如果相等，慢指针不懂，快指针向前
        4. 最后慢指针位置是新数组最后一位+1，下标等于数组长度
*/
int removeElement(int* nums, int numsSize, int val)
{

    int fast = 0;
    int slow = 0;

    for(fast = 0;fast<numsSize;fast++)
    {
        if(nums[fast] != val)
        {
            nums[slow] = nums[fast];
            slow++;
        }
        else
        {
            continue;
        }
    }

    return slow;
}