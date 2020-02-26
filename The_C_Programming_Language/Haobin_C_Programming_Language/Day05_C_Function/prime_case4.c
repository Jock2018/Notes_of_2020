/*
    时间：2020年2月24日11:25:24
    目的：
        求 1 到某个数字之间的所有素数，并将其输出
    总结：
        把函数功能进行拆分，一个功能一个函数，代码量更少，可重用性更高
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

 // 本函数功能是把 1-n 之间所有的函数在显示器上输出
void TraverseVal(int n)
{
    int i;
    
    for (i=2; i<=n; ++i)
    {
        if (IsPrime(i))
            printf("%d\n", i);
    }
}


int main(void)
{
    int val;

    scanf("%d", &val);
    TraverseVal(val);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
10
2
3
5
7
--------------------------
*/