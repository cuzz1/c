#include <stdio.h>
#define MAXLINE 1000

int getlinex(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ok";

int main(void)
{
    char line[MAXLINE];
    int found = 0;

    while (getlinex(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0)
        {
            printf("%s", line);
            found++;
        }
    printf("%d", found);
    return 0;
}

/*getlinex函数:将行保存到s中,并返回该行的长度*/
int getlinex(char s[], int lim)
{
    int c, i;
    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c=='\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/* strindex函数: 返回t在s中的位置,如果灭有找到就返回-1 */

int strindex(char s[], char t[])
{
    int i, j, k;
    for (i=0; s[i] != '\0'; i++)
    {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;

}



