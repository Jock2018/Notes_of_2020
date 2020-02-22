/*
    时间：2020年2月20日10:52:45
    功能：
        求1-100之间的奇数之和
        求1-100之间的奇数个数
        求1-100之间的奇数平均值
        求1-100之间的奇数之和，再求1-100之间的偶数之和
*/

# include <stdio.h>

int main(void)
{
    int i;  // 循环变量
    int sum_odd = 0;  // 奇数之和
    int sum_even = 0;  // 偶数之和
    int cnt = 0;  // 奇数的个数，个数一般用cnt表示
    float average_odd = 0;  // 奇数的平均值

    for (i=1; i<=100; ++i)
    {
        if (i%2 == 0)
        {
            sum_even += i;  // 等价于 sum_even = sum_even + i;
        }
        else
        {
            sum_odd += i;  // 等价于 sum_odd = sum_odd + i;
            ++ cnt;  // 等价于 cnt = cnt + 1;
        }
    }

    average_odd = 1.0*sum_odd / cnt;  // 推荐这么写，1.0 默认是double类型
    // average_odd = sum_odd / (float)(cnt);  // 不推荐这么写

    printf("1-100之间的奇数之和是：%d\n", sum_odd);
    printf("1-100之间的奇数个数是：%d\n", cnt);
    printf("1-100之间的奇数平均值：%f\n", average_odd);  // 这里是%f
    printf("1-100之间的奇数之和是：%d, 偶数之和是：%d\n", sum_odd, sum_even);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
1-100之间的奇数之和是：2500
1-100之间的奇数个数是：50
1-100之间的奇数平均值：50.000000
1-100之间的奇数之和是：2500, 偶数之和是：2550
--------------------------
*/