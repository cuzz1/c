#include <stdio.h>

#define MAXLINE 1000

int getlines(char line[], int maxline);
int copy( char to[], char from[]);

int mian(void)
{
    int len;        /*当前的长度*/
    int max;        /*目前发现的最长行的长度*/
    char line[MAXLINE];   /* 当前的输入行*/
    char longest[MAXLINE];  /* 用于保存最长得行*/

    max = 0;
    while ( (len = getlines(line, MAXLINE)) > 0 )
        if ( len > max )
        {
            max = len;
            copy(longest, line);
        }
    if ( max > 0)
        printf("%s", longest);
    
    return 0;
}

int getlines(char s[], int lim)
{
    int c, i;

    for ( i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; i++)
    {
        s[i] =  c;
    }
    if ( c == '\n')
    {
        s[i] = c;
        i++;
    }
    return i;
}

int copy( char to[], char from[])
{
    int i;
    
    i = 0;
    while ( (to[i] = from[i]) != 0)
        i ++;
    
    return 0;
}











