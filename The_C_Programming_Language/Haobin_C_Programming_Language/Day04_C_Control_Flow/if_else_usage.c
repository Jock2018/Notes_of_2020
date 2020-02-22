/*
    时间：2020年2月19日 17：33
    目的：
        测试if...else...的用法
    总结：
        1. if和else默认只能控制一个语句的执行或不执行。
        2. if和else要控制多个语句，则用{}把多个语句括起来。
        3. 注意非if和else控制的语句不要缩进。
*/

# include <stdio.h>

int main(void)
{
    int i, j;
    
    scanf("%d %d", &i, &j);  // 接受输入
    
    if (i > j)
        printf("i大于j\n");
    else
        printf("i小于j\n");

    printf("\n");  // 打印空行

    if (1 > 2)
        printf("AAAA\n");
        // printf("哈哈哈哈\n");  // 加了这行会报错，导致30行的 else 没有 if 配对
    else
        printf("BBBB\n");

    printf("CCCC\n");  // 注意代码规范，这行代码不要缩进

    return 0;
}

/*
    在VSCode中的输入输出结果是：
--------------------------
1 2
i小于j

BBBB
CCCC
--------------------------
*/