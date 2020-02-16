# include <stdio.h>

int main(void)
{
    int i;

    i = 3;  // 3最终放在内存中，程序终止后3所占空间被释放
    printf("i = %d\n", i);

    return 0;
}