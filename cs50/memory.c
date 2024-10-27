#include<stdio.h>
#include<string.h>

void testString();
void testString2();
void testStringPointer();

void main()
{
    int n = 50;
    int *p = &n;
    printf("n的值是%i\n", n);
    printf("n的地址是%p\n", &n);
    printf("p的地址是%p\n", p);
    printf("*p的值是%i\n", *p);

    testString();
    testString2();
    testStringPointer();
}

void testString()
{
    char *p = "hello world";
    printf("p的地址是%p\n", p);
    printf("p的值是%s\n", p);
}

void testString2()
{
    char s[] = "hello world";
    printf("s的地址%p\n", &s);
    printf("s的地址%s\n", s);
}

// 字符串指针
void testStringPointer()
{
    char *q = "hello world";
    printf("q的地址是%p\n", q);
    printf("q的值是%s\n", q);
    
    // 访问字符串 字符串可以计算
    char *s = "HI!";
    printf("s的地址0是%c\n", *s);
    printf("s的地址1是%c\n", *(s + 1));
    printf("s的地址2是%c\n", *(s + 2));
}