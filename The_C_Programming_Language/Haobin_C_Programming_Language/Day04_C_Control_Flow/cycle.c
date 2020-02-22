/*
    时间：2020年2月20日 9：22
    功能：
        1+2+3+...+100求和
    总结：
        1. 循环可以处理规律性的操作，减少代码量
*/

# include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for (i=1; i<=100; ++i)
        sum = sum + i;
    printf("sum = %d\n", sum);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
sum = 5050
--------------------------
*/