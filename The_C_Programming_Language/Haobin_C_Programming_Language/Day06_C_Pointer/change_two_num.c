/*
    时间：2020年2月24日14:45:35
    功能：
        通过被调函数修改主调函数普通变量的值
    总结：
        1. 实参必须为该普通变量的地址。
        2. 形参必须为指针变量。
        3. 在被调函数中通过 * 形参名 = XXX 的方式就可以修改主调函数相关的变量。
*/

# include <stdio.h>

void huhuan_1(int, int);
void huhuan_2(int *, int *);
void huhuan_3(int *, int *);

// 不能完成互换功能
void huhuan_1(int a, int b)
{
    int t;

    t = a;
    a = b;
    b = t;

    return;  
}

// 不能完成互换功能
void huhuan_2(int * p, int * q)
{
    int * t; // 如果要互换 p 和 q 的值，则 t 必须是 int *, 不能是 int, 否则会出错

    t = p;
    p = q;
    q = t;

    return;  
}

// 可以完成互换功能
void huhuan_3(int * p, int * q)
{
    int t;  // 如果要互换 *p 和 *q 的值，则 t 必须定义成 int 不能定义成 int *, 否则语法错误

    t = *p;  // p 是 int *, *p 是 int
    *p = *q;
    *q = t;

    return;  
}

int main(void)
{
    int a = 3;
    int b = 5;

    // huhuan_1(a, b);
    // huhuan_2(&a, &b);  // huhuan_2(*p, *q); 是错误的， huhuan_2(a, b); 也是错误的
    huhuan_3(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
a = 5, b = 3
--------------------------
*/