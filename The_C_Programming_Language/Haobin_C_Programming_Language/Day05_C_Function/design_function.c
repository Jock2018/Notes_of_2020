/*
    时间：2020年2月22日19:02:37
    功能：
        判断一个函数是否是素数
    总结：
        1. 只用一个函数实现，代码的利用率不高。
*/

# include <stdio.h>

int main(void)
{
    int val;
    int i;

    for (i=2; i<val; ++i)
    {
        if (0 == val%i)
            break;
    }
    if (i == val)
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