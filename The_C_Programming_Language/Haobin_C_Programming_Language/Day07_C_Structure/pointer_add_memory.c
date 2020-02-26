/*
    时间：2020年2月25日15:22:23
    示例：
        发送地址还是发送内容
    目的：
        指针的优点之一：
            传递数据，
            耗用内存小
            执行速度快
*/

# include <stdio.h>
# include <string.h>

struct Student
{
    int age;
    char sex;
    char name[100];
};  // 分号不能省

void InputStudent(struct Student *);
void OutputStudent(struct Student *);

int main(void)
{
    struct Student st;
    printf("%d\n", sizeof(st));

    InputStudent(&st);  // 对结构体变量输入  必须发送st的地址
    OutputStudent(&st);  // 对结构体变量输出  可以发送st的地址也可以发送st的内容，但为了减少内存的耗费，也为了提高执行速度，推荐发送地址

    return 0;
}

void OutputStudent(struct Student * pst)
{
    printf("%d %c %s\n", pst->age, pst->sex, pst->name);
}

void InputStudent(struct Student * pstu)  // pstu 只占4个字节
{
    (*pstu).age = 10;
    strcpy(pstu->name, "张三");
    pstu->sex = 'F';
    
}

/*
// 本函数无法修改主函数 st 的值，所以本函数是错误的
void InputStudent(struct Student stu)
{
    stu.age = 10;
    strcpy(stu.name, "张三");  // 不能写成 stu.name = "张三";
    stu.sex = 'F';
}
*/

/*
    在VSCode中的输出结果是：
--------------------------
108
10 F 张三
--------------------------
*/