#include <stdio.h>

#define MAXLINE 1000

int getlinex( char line[], int maxline);
int remo(char s[]);

int main(void)
{
    char line[MAXLINE]; 

    while ( (getlinex(line, MAXLINE)) > 0) 
    {
        if ( remo(line) > 0)
        {
            printf("%s", line);
        }
    }

    return 0;
}

int getlinex( char s[], int lim)
{
    int c, i,j;
    j = 0;
    for ( i=0;i < (c=getchar()) != EOF && c != '\n'; i++  )
    {
        if ( i < lim-2)
            i ++;
            j ++;
    }
    if ( c == '\n')
    {
        s[j] = c;
        i ++;
        j ++;
    }
    return i;
}

int remo(char s[])
{
    int i;
    i = 0;
    while (s[i] != '\n')   /* find newline character*/
    {
        i++;
    }
    i--;
    while ( i >= 0 && (s[i] == ' ' || s[i] == '\t'))
            i --;
    if (i >= 0)
    {
        i++;
        s[i] = '\n';
        i++;
        s[i] = '\0';
    
    }
    return i;
}









