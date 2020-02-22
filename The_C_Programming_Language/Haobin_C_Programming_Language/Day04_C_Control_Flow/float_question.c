/*
    时间：2020年2月20日10:48:42
    总结：
        1. 本程序不对，因为循环中更新的变量不能定义为浮点型
*/

# include <stdio.h>

int main(void)
{
    float i;
    float sum = 0;

    for (i=1.0; i<=100; ++i)
    {
        sum = sum + 1/i;
    }

    printf("sum = %f\n", sum);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
sum = 5.187378
--------------------------
*/