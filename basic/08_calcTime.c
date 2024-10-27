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
    
    
    int splic1 = hour1 - hour2;
    int splic2 = min1 - min2;

    if (splic2 < 0) {
        splic2 += 60;
        splic1--;
    }
    printf("时间差是%d小时%d分钟\n", splic1, splic2);
    return 0;
}