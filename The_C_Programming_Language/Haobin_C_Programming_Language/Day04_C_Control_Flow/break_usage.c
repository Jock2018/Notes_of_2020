/*
    时间：2020年2月20日16:16:26
    目的：
        测试 break 的用法
    总结：
        break 虽然是if内部的语句，但break终止的的确是外部的for循环
*/

#include <stdio.h>

int main(void)
{
    int i;

    switch (2)
    {
    case 2:
        printf("哈哈！\n");
        break; // OK，break 可以用于switch

    default:
        break;
    }

    for (i = 0; i < 3; ++i)
    {
        if (3 > 2)
            break;  // break 虽然是if内部的语句，但break终止的的确是外部的for循环
        printf("嘿嘿！\n");  // 永远不会输出
    }
    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
哈哈！
--------------------------
*/