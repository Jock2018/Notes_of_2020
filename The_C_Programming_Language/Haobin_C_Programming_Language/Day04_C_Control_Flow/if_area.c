/*
    时间：2020年2月19日 17：16
    目的：
        测试if的作用范围
    总结：
        1. if默认只能控制一个语句的执行或不执行。
        2. if要控制多个语句，则用{}把多个语句括起来。
*/

# include <stdio.h>

int main(void)
{
    if (3 > 2)  // 为真
        printf("AAAA\n");  // 表达式为真，执行
        printf("BBBB\n");  // 一定会执行

    printf("\n");  // 输出空行

    if (1 > 2)  // 为假
        printf("CCCC\n");  // 表达式为假，不执行
        printf("DDDD\n");  // 一定会执行

    printf("\n");  // 输出空行

    
    if (1 > 2)  // 为假，则{}内的代码块不执行
    {
        printf("EEEEE\n");  
        printf("FFFF\n");  
    }

    printf("GGGG\n");  // 这里不缩进，增强代码的可读性
        
    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
AAAA
BBBB

DDDD
--------------------------
*/