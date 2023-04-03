//反转数组 题目链接：https://leetcode.cn/leetbook/read/array-and-string/cacxi/
#include<stdio.h>

/*
    算法思想：
        1. 设置两个指针，一个指向第一个元素，另一个指向最后一个元素
        2. 设置中间变量，用于交换值
        3. 从第一个和最后一个开始，将两个元素的值交换。
        4. 直到两个指针指向中间元素
            或 前指针指向后半元素
*/
void reverseString(char* s, int sSize){
    char temp;
    int front;
    int back;
    for(front=0,back=sSize-1;front<back;front++,back--)
    {
        temp = s[front];
        s[front] = s[back];
        s[back] = temp;
    }
}

int main(void)
{
    int index;
    char str[5] = {'H','e','l','l','o'};
    for(index = 0;index<5;index++)
    {
        printf("%c",str[index]);
    }
    printf("\n");
    reverseString(str,5);
    for(index = 0;index<5;index++)
    {
        printf("%c",str[index]);
    }
    system("pause");
    return 0;
}