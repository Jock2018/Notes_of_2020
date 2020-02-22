/*
    时间：2020年2月20日13:41:31
    功能：
        求 1 + 2 + 3 + ... + 100 的和
    目的：
        比较 for 和 while 的异同
    总结：
        1. for和while可以互相转换。
        2. for逻辑性更强，更不易出错，推荐使用。
*/

# include <stdio.h>

int main(void)
{
    int i;
    int j;
    int sum_1 = 0;  // for求和
    int sum_2 = 0;  // while求和

    for (i=1; i<101; ++i)
    {
        sum_1 += i;
    }
    printf("sum_1 = %d\n", sum_1);

    j = 1;
    while (j<101)
    {
        sum_2 += j;
        ++j;
    }
    printf("sum_2 = %d\n", sum_2);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
sum_1 = 5050
sum_2 = 5050
--------------------------
*/