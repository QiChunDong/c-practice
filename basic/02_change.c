#include <stdio.h>

int calc()
{
    const int TOTAL = 100;
    // ��ֵ�ᱨ��
    // tatol = 200;
    int price = 0;
    printf("�������Ԫ��: ");
    // �����ն˵����뺯�����û�������
    scanf("%d", &price);
    int change = TOTAL - price;
    printf("���㣺%dԪ\n", change);
}

int calc_const()
{
    int amount = 100;
    int price = 0;
    printf("�������Ԫ��: ");
    // �����ն˵����뺯�����û�������
    scanf("%d", &price);
     printf("������Ʊ��: ");
    scanf("%d", &amount);
    int change = amount - price;
    printf("���㣺%dԪ\n", change);
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
    // ������������ ����ĸ�ʽҪ�͸�ʽһ�£��м��пո�
    int i = 0;
    int j = 0;
    printf("�����������֣��ո������\n");
    scanf("%d %d", &i, &j);
    printf("%d %d\n", i, j);
    printf("�����������֣����Ÿ�����\n");
    // ������������ ����ĸ�ʽҪ�͸�ʽһ�£��м��ж���
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