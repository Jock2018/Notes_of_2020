/*
    时间：2020年2月20日16:43:56
    目的：
        测试 break 在多层嵌套 switch 中的用法
    总结：
        1. 在多层switch嵌套中，break 只能够终止距离它最近的switch。
*/

# include <stdio.h>

int main(void)
{
    int x=1, y=0, a=0, b=0;

    switch(x)  // 第一个 switch
    {
        case 1:
            switch(y)  // 第二个switch
            {
                case 0:
                    a++;
                    break;  // 终止的是第二个switch
                case 1:
                    b++;
                    break;  // 终止的是第二个switch
            }
            b = 100;
            break;  // 终止的是第一个switch
        case 2:
            a++;
            b++;
            break;  // 终止的是第一个switch
    }

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
a = 1, b = 100
--------------------------
*/