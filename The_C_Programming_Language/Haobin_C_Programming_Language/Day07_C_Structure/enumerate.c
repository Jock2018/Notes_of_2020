/*
    时间：2020年2月25日18:25:26
    枚举的使用
*/

# include <stdio.h>


// 只定义了衣蛾数据类型，并没有定义变量，该数据类型的名字叫做 enum WeekDay
enum WeekDay
{
    MonDay, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, SunDay
};

int main(void)
{
    // int day; // day 定义成int类型不合适
    enum WeekDay day = WednesDay;
    printf("%d\n", day);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
2
--------------------------
*/