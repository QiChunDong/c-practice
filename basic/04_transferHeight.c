#include <stdio.h>
int main()
{
    printf("请输入身高的英尺和英寸：\n"
    "如: 5 7。标识5英尺和7英寸！\n");
    double foot;
    double inch;
    // scanf("%d %d", &foot, &inch);
    // scanf中，浮点数输入使用%lf 表示浮点数
    scanf("%lf %lf", &foot, &inch);
    // 浮点数计算，会先把公式中不是浮点数的数值先转为浮点数
    // inch / 12.0  会先inch转为xxx.0
    printf("身高是%f米\n", (foot + inch / 12.0) * 0.3048);
    return 0;
}