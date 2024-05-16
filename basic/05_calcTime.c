#include <stdio.h>
int main()
{
    int hour1, min1;
    int hour2, min2;
    printf("请输入晚的小时和分钟：\n"
    "如: 5 7。标识5时和7分！\n");
    scanf("%d %d", &hour1, &min1);
    printf("请输入早的小时和分钟：\n"
    "如: 5 7。标识5时和7分！\n");
    scanf("%d %d", &hour2, &min2);
    int tatol1 = hour1 * 60 + min1;
    int tatol2 = hour2 * 60 + min2;
    int res = tatol1 - tatol2;
    printf("时间差是%d小时%d分钟\n", res / 60, res % 60);
    return 0;
}