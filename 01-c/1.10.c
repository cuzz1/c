#include <stdio.h>

#define MAXLINE 1000  /*允许的输入的最大的长度*/

int max;
char line[MAXLINE];
char longes[MAXLINE];

int getlinex(void);
void copy(void);

int main(void)
{
    int len;
    extern int max;
    extern char longest[];  /*申明这是一个外部变量*/

    max = 0;
    while ((len = getlinex()) > 0)
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }
    if (max > 0)
       printf("%s", longest); 
    return 0;
}

int getlinex(void)
{
    int c, i;
    extern char line[];
    for ( i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; i++) 
    {
        line[i] = c;
    }
    if ( c == '\n')    /* 防止是空行*/
    {
        line[i] = c;  
        i++;
    }
    line[i] = '\0';
    return i;
}

void copy(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i]=line[i]) != '\0')
    {
        i++;
    }
}
