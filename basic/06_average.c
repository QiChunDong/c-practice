#include <stdio.h>
int main()
{
    int num1, num2;
    printf("请输入两个数字\n");
    scanf("%d %d", &num1, &num2);
    printf("平均数是：%f\n", (num1 + num2) / 2.0);
    return 0;
}