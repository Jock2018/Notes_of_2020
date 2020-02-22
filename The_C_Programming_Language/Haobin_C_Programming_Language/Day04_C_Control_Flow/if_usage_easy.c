/*
    时间：2020年2月19日17：04
    目的：
        测试if的最简单用法
    总结：
        1. if后的表示式如果为真，则执行if后的第一个语句。
        2. if后的表示式如果为假，则不执行if后的第一个语句。
*/

# include <stdio.h>

int main(void)
{
    if (3 > 2)  // 为真
        printf("AAAA\n");  // 输出结果：AAAA
    
    if (3)  // 为真
        printf("BBBB\n");  // 输出结果：BBBB
    
    if (0)  // 为假
        printf("CCCC\n");  // 不会输出
    
    if (0 == 0)  // 为真
        printf("DDDD\n");  // 输出结果：DDDD

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