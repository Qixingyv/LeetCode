// Paolua 2023/04/07 最大连续1的个数 https://leetcode.cn/leetbook/read/array-and-string/cd71t/
#include<stdio.h>
int findMaxConsecutiveOnes(int* nums, int numsSize);

int main(void)
{
    int array[] = {1,1,0,1,1,1};

    int len = findMaxConsecutiveOnes(array,6);
    printf("%d",len);
    system("pause");
    return 0;
}

/*
    算法思想：
        循环遍历数组，如果等于一，则count自增记录长度
        如果不等于一，则将count设置为0
        result需要检测count的状态以便记录最长值
*/
int findMaxConsecutiveOnes(int* nums, int numsSize){

    int index;
    int count = 0;
    int result = 0;

    for(index = 0; index < numsSize; index++)
    {
        if(nums[index] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if(result<count)
        {
            result = count;
        }
    }

    return result;

}