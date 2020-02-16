# include <stdio.h>

int main(void)
{
    char ch = 'A';  // OK
    // char ch = "AB"; //error 因为"AB"是字符串，我们不能把字符串赋给单个字符
    // char ch = "A";  // error

    // char ch = 'AB';  // 'AB'是错误的
    // char ch = 'B';  // error,因为ch变量已经在5行被定义，这样会导致变量名被重复定义。
    ch = 'C';  // OK

    printf("%c\n", ch);

    return 0;
}