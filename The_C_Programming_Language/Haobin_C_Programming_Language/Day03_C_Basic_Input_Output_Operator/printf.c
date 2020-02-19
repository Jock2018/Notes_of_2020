# include <stdio.h>

int main(void)
{
    // printf("哈哈！\n");  // \n表示换行

    // int  i = 10;

    // printf("i = %d\n", i);  // d是十进制

    int j = 3;
    int k = 5;
    // printf("%d %d\n", j, k);  // OK
    // printf("%d\n", j, k); // error 输出控制符和输出参数个数不匹配
    printf("i = %d, j = %d\n", j, k); 

    return 0;
}