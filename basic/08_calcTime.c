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
    
    
    int splic1 = hour1 - hour2;
    int splic2 = min1 - min2;

    if (splic2 < 0) {
        splic2 += 60;
        splic1--;
    }
    printf("ʱ�����%dСʱ%d����\n", splic1, splic2);
    return 0;
}