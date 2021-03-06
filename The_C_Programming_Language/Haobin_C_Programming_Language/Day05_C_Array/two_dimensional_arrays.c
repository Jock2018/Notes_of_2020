/*
    时间：2020年2月22日10:40:20
    目的：
        输出二维数组内容
    总结：
        1. 输出二维数组内容需要用到两层循环
*/

#include <stdio.h>

int main(void)
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int i, j;

    // 输出数组内容
    for (i=0; i<3; ++i)
    {
        for (j=0; j<4; ++j)
        {
            printf("%-5d",a[i][j]);  // %-5d 表示左对齐，每个数占用5个字节
        }
        printf("\n");
    }

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
1    2    3    4    
5    6    7    8    
9    10   11   12
--------------------------
*/