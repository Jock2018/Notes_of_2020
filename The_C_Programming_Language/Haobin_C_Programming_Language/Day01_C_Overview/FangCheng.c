# include <stdio.h>
# include <math.h>

int main(void)
{
    // 把三个系数保存到计算机中
    int a = 1;  // =不表示相等，表示赋值
    int b = 5;
    int c = 6;
    float delta;  // delta存放的是b*b - 4*a*c
    float x1;  // 存放一元二次方程的一个解
    float x2;  // 存放一元二次方程的一个解

    delta = b*b - 4*a*c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("该一元二次方程有两个解，x1 = %f, x2 = %f\n", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = (-b ) / (2*a);
        x2 = x1;  // 右边赋值给左边
        printf("该一元二次方程有一个唯一解，x1 = x2 = %f, x2 = %f\n", x1);
    }
    else
    {
        printf("该一元二次方程无解\n");
    }


    return 0;
}