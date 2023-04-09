// 2023/04/05 两数相加Ⅱ 题目链接：https://leetcode.cn/leetbook/read/array-and-string/cnkjg/

/*
    numbers为传入的数组，numbersSize为传入数组场地
    returnSize 为返回的数组大小
    C语言环境中，传入数组下标从0开始

    算法思想：
        1. 双指针指向第一个和最后一个元素
        2. 对两个元素进行相加，如果和大于target，最后一个元素前移
        3. 如果和小于target，第一个元素后移
    第二种解法和两数相加一致，穷举法
*/
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){

    int index1 = 0;
    int index2 = numbersSize-1;

    while(numbers[index1] + numbers[index2] != target)
    {
        if(numbers[index1] + numbers[index2] > target)
        {
            index2--;
        }

        if(numbers[index1] + numbers[index2] < target)
        {
            index1++;
        }
    }

    int* arr = (int*)malloc(2*sizeof(int));
    arr[0] = index1+1;
    arr[1] = index2+1;
    *returnSize = 2;
    return arr;
    
}