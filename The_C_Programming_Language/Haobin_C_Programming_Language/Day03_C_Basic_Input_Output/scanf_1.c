# include <stdio.h>

int main(void)
{
    int i;

    // i = 10;
    scanf("%d", &i);  // &i表示i的地址 &是一个取地址符
    
    printf("i = %d\n", i);

    return 0;
}