#include<stdio.h>

void change( int *p1, int *p2);
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int *p1 = &a;
    int *p2 = &b;
    change( &a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}

void change( int *p1, int *p2)
{
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}


