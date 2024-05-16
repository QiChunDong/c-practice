#include <stdio.h>

int calc()
{
    const int TOTAL = 100;
    // 赋值会报错
    // tatol = 200;
    int price = 0;
    printf("请输入金额（元）: ");
    // 用于终端的输入函数，用户输入金额
    scanf("%d", &price);
    int change = TOTAL - price;
    printf("找零：%d元\n", change);
}

int calc_const()
{
    int amount = 100;
    int price = 0;
    printf("请输入金额（元）: ");
    // 用于终端的输入函数，用户输入金额
    scanf("%d", &price);
     printf("请输入票面: ");
    scanf("%d", &amount);
    int change = amount - price;
    printf("找零：%d元\n", change);
}

void test()
{
    int i = 0;
    int j;
    j = i + 10;
    printf("%d, \n", j);
}

void testScanf()
{
    // 输入两个数字 输入的格式要和格式一致，中间有空格
    int i = 0;
    int j = 0;
    printf("输入两个数字，空格隔开：\n");
    scanf("%d %d", &i, &j);
    printf("%d %d\n", i, j);
    printf("输入两个数字，逗号隔开：\n");
    // 输入两个数字 输入的格式要和格式一致，中间有逗号
    int i1 = 0;
    int j1 = 0;
    scanf("%d,%d", &i1, &j1);
    printf("%d,%d\n", i1, j1);
}

int main()
{
    // printf("hello world! \n");
    // calc();
    calc_const();
    // test();
    // testScanf();
}