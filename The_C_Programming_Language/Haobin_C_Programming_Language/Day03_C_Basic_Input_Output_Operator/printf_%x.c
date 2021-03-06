/*
    2020年02月16日21：40:48
    功能：
    目的：
        测试 %x %X  %#X %#x 的用法

*/

# include <stdio.h>

int main(void)
{
    int x = 47;  // 49是十进制

    printf("%d\n", x);  // 十进制输出
    printf("%x\n", x);  // 十六进制输出，输出结果是：2f
    printf("%X\n", x);  // 十六进制输出，输出结果是：2F
    printf("%#X\n", x);  // 十六进制输出，输出结果是：0X2F    %#X推荐使用
    printf("%#x\n", x);  // 十六进制输出，输出结果是：0x2f
    
    return 0;
}

/*

    在VSCode中的输出结果是：
--------------------------
47
2f
2F
0X2F
0x2f
--------------------------
    总结： %#X推荐使用

*/