/*
    时间：2020年2月20日14:48:36
    功能：
        用 do...while 实现一元二次方程
    总结：
        1. do...while主要是便于人机交互。
        2. do...while至少会执行一次循环，while和for可能一次循环都不执行。
        3. scanf()输入%c时，一定要在%c前保留一个空格
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double delta;
    double x1, x2;
    char ch;

    do
    {
        printf("请输入一元二次方程的三个系数：\n");
        printf("a = ");
        scanf("%lf", &a);

        printf("b = ");
        scanf("%lf", &b);

        printf("c = ");
        scanf("%lf", &c);

        delta = b * b - 4 * a * c;

        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("该一元二次方程有两个解，x1 = %lf，x2 = %lf\n", x1, x2);
        }
        else if (delta == 0)
        {
            x1 = x2 = (-b) / (2 * a);
            printf("该一元二次方程有唯一解，x1 = x2 = %lf\n", x1, x2);
        }
        else
        {
            printf("该一元二次方程无实数解！\n");
        }
        printf("您想继续吗(Y/N)：");
        scanf(" %c", &ch);  // %c前面必须得加一个空格 原因略
        // scanf("%c", &ch);  // 错误写法，程序直接跳出循环
    } while ('Y'==ch || 'y'==ch);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
请输入一元二次方程的三个系数：
a = 1
b = 2
c = 3
该一元二次方程无实数解！
您想继续吗(Y/N)：y
请输入一元二次方程的三个系数：
a = 3
b = 4
c = 5
该一元二次方程无实数解！
您想继续吗(Y/N)：N
--------------------------
*/