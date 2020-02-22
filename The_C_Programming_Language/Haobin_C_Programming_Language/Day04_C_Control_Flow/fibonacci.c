/*
    时间：2020年2月20日14:20:36
    功能：
        斐波那契数列
*/

# include <stdio.h>

int main(void)
{
    int n;
    int f1, f2, f3;
    int i;

    f1 = 1;
    f2 = 2;

    printf("请输入您需要求斐波那契序列的第几项：");
    scanf("%d", &n);

    if (n == 1)
    {
        f3 = 1;
    }
    else if (n == 2)
    {
        f3 = 2;
    }
    else
    {
        for (i=3; i<=n; ++i)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
    }

    printf("%d\n", f3);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
请输入您需要的求的序列：4
5
--------------------------
*/