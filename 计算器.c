#include<stdio.h>
//1:
void menu()
{
    printf("####################\n");
    printf("##1. Add    2. Sub##\n");
    printf("##3. Mul    4. Div##\n");
    printf("##     0.exit     ##\n");
    printf("####################\n");
}
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int  Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
//2:
int main()
{
    int x, y;
    int input = 1;
    int ret = 0;
    int(*p[5])(int x, int y) = { 0, Add, Sub, Mul, Div }; //转移表
    while (input)
    {
        printf("####################\n");
        printf("##1. Add    2. Sub##\n");
        printf("##3. Mul    4. Div##\n");
        printf("##     0.exit     ##\n");
        printf("####################\n");
        printf("请选择：");
        scanf("%d", &input);
        if ((input <= 4 && input >= 1))
        {
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = (*p[input])(x, y);
        }
        else
            printf("输入有误\n");
        printf("ret = %d\n", ret);
    }
    return 0;
}