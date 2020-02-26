/*
    时间：2020年2月22日16:43:42
    功能：
        判断一个函数是否是素数
    总结：
        1. 只用一个函数实现，不好，代码的利用率不高
        2. 用单独的函数来实现，代码的可重用性提高了
*/

# include <stdio.h>
# include <stdbool.h>  // 这里跟视频代码稍微不一样，是 C99 标准导致的

bool IsPrime(int val)
{
    int i;

    for (i=2; i<val; ++i)
    {
        if (val%i == 0)
        break;
    }
    if (i == val)
        return true;
    else
        return false;
}

int main(void)
{
    int m;
    int i;

    scanf("%d", &m);
    if (IsPrime(m))
        printf("Yes!\n");
    else
        printf("No!\n");

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/