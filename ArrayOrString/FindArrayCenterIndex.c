//题目链接：https://leetcode.cn/leetbook/read/array-and-string/yf47s/
#include<stdio.h>

/*
    算法过程：
        1. 声明两个变量，一个存放左值，一个存放右值。先计算出数组元素之和
        2. 从第一个元素开始，在元素之和中减去一个元素的值
        3. 每减去一个值，先和左值进行比较。如果相等，返回下标
        4. 如果不相等，则把该下标的值加在左值中
        4. 如果减去所有元素都没有得到值，则返回-1
    代码解析：
        1. leftSum代表左半部分的值，rightSum代表右半部分的值
        2. 使用第一个for循环来计算数组之和
        3. 第二个for循环用来计算去掉值后左值和右值的变化
*/
int pivotIndex(int* nums, int numsSize){

    int index;
    int LeftSum = 0;
    int RightSum = 0;
    for(index = 0;index<numsSize;index++)
    {
        RightSum += nums[index];
    }

    for(index = 0;index<numsSize;index++)
    {
        RightSum -= nums[index];
        if(RightSum == LeftSum)
        {
            return index;
        }
        LeftSum += nums[index];
    }

    return -1;

}

int main(void)
{
    int array[6] = {1,7,3,6,5,6};
    printf("%d",pivotIndex(array,6));
    system("pause");
    return 0;
}

