#include <stdio.h>
int main()
{
    int hour1, min1;
    int hour2, min2;
    printf("���������Сʱ�ͷ��ӣ�\n"
    "��: 5 7����ʶ5ʱ��7�֣�\n");
    scanf("%d %d", &hour1, &min1);
    printf("���������Сʱ�ͷ��ӣ�\n"
    "��: 5 7����ʶ5ʱ��7�֣�\n");
    scanf("%d %d", &hour2, &min2);
    int tatol1 = hour1 * 60 + min1;
    int tatol2 = hour2 * 60 + min2;
    int res = tatol1 - tatol2;
    printf("ʱ�����%dСʱ%d����\n", res / 60, res % 60);
    return 0;
}