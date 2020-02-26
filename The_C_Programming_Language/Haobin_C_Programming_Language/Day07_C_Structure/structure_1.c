/*
    时间：2020年2月25日11:20:13
    结构体的定义
*/

# include <stdio.h>

// 第一种方式
struct Student
{
    int age;
    float score;
    char sex;
};

// 第二种方式
struct Student2
{
    int age;
    float score;
    char sex;
} st2;

// 第三种方式
struct 
{
    int age;
    float score;
    char sex;
} st3;

int main(void)
{
    struct Student st = {80, 66.6, 'F'};

/*
    int age;
    float score;
    char sex;
    int age2;
     float score2;
     char sex2;
*/
    

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/