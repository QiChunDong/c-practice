#include <stdio.h>
int main()
{
    printf("��������ߵ�Ӣ�ߺ�Ӣ�磺\n"
    "��: 5 7����ʶ5Ӣ�ߺ�7Ӣ�磡\n");
    double foot;
    double inch;
    // scanf("%d %d", &foot, &inch);
    // scanf�У�����������ʹ��%lf ��ʾ������
    scanf("%lf %lf", &foot, &inch);
    // ���������㣬���Ȱѹ�ʽ�в��Ǹ���������ֵ��תΪ������
    // inch / 12.0  ����inchתΪxxx.0
    printf("�����%f��\n", (foot + inch / 12.0) * 0.3048);
    return 0;
}