/*
    时间：2020年2月22日17:31:27
    功能：
        XXX
    总结：
        1. XXX
*/

# include <stdio.h>

float f(int i)
{
    return 10.8;
}

int main(void)
{
    float i = 99.9;
    
    printf("%f\n", i);
    i = f(5);
    printf("%f\n", i);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
99.900002
10.800000
--------------------------
*/