/*
    时间：2020年2月20日09:50:46
    功能：
        求1-100之间所有能被3整除的数字之和
*/

# include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    // for (i=1; i<=100; ++i)
    for (i=3; i<=10; ++i)
    {
        if (i%3 == 0)  // ()不能少，养成习惯
            sum = sum + i;
    }

    printf("sum = %d\n", sum);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/