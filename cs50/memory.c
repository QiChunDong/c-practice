#include<stdio.h>
#include<string.h>

void testString();
void testString2();
void testStringPointer();

void main()
{
    int n = 50;
    int *p = &n;
    printf("n��ֵ��%i\n", n);
    printf("n�ĵ�ַ��%p\n", &n);
    printf("p�ĵ�ַ��%p\n", p);
    printf("*p��ֵ��%i\n", *p);

    testString();
    testString2();
    testStringPointer();
}

void testString()
{
    char *p = "hello world";
    printf("p�ĵ�ַ��%p\n", p);
    printf("p��ֵ��%s\n", p);
}

void testString2()
{
    char s[] = "hello world";
    printf("s�ĵ�ַ%p\n", &s);
    printf("s�ĵ�ַ%s\n", s);
}

// �ַ���ָ��
void testStringPointer()
{
    char *q = "hello world";
    printf("q�ĵ�ַ��%p\n", q);
    printf("q��ֵ��%s\n", q);
    
    // �����ַ��� �ַ������Լ���
    char *s = "HI!";
    printf("s�ĵ�ַ0��%c\n", *s);
    printf("s�ĵ�ַ1��%c\n", *(s + 1));
    printf("s�ĵ�ַ2��%c\n", *(s + 2));
}