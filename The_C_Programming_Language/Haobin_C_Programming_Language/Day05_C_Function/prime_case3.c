/*
    时间：2020年2月24日11:25:24
    目的：
        求 1 到某个数字之间的所有素数，并将其输出
    总结：
        用一个函数来判断数字是否是素数：
        优点：
            1. 代码可重用性比前一个更高
            2. 代码比前一个更好理解
        缺点：
            可重用性仍然不是非常高，如求1000个数字，求他们每个数字从1到它本身的素数
            则：
                for (i=2; i<val; ++i)
                {
                    if (IsPrime(i))
                        printf("%d\n", i);
                }
            要写 1000 次

*/

# include <stdio.h>
# include <stdbool.h>

// 本函数的功能是：判断m是否是素数，是返回true，不是返回false
 bool IsPrime(int m)
 {
     int i;

    for (i=2; i<m; i++)
    {
        if (0 == m%i)
            break;
    }
    if (i == m)
        return true;
    else
        return false;
    
 }

int main(void)
{
    int val;
    int i;
    int j;

    scanf("%d", &val);
    for (i=2; i<val; ++i)
    {
        if (IsPrime(i))
            printf("%d\n", i);
    }

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/