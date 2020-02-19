# include <stdio.h>

int main(void)
{
    int i;

    scanf("m%d", &i);  // m123 合法的输入， 123是非法的输入
    printf("i = %d\n", i);

    return 0;
}