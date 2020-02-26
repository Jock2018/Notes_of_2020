/*
    时间：2020年2月24日11:15:27
    目的：
        求 1 到某个数字之间的所有素数，并将其输出
    总结：
        只用 main 函数实现有局限性：
            1. 代码重用性不高；
            2. 代码不容易理解
*/

# include <stdio.h>

int main(void)
{
    int val;
    int i;
    int j;

    scanf("%d", &val);
    for (i=2; i<=val; ++i)
    {
        for (j=2; j<i; ++j)
        {
            if (0 == i%j)
                break;
        }
        if (j == i)
            printf("%d\n", i);
    }

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/