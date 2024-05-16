#include <stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    printf("请输入2个整数：\n");
    // 输入2个数字，空格隔开可以直接运行加
    // 输入1个数字回车，会等待用户继续输入第2个
    scanf("%d %d", &i, &j);
    printf("%d + %d = %d!\n", i, i, i + j);
    return 0;
}