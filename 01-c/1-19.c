#include <stdio.h>
#define MAXLINE 1000

int getlinex(char line[], int maxline);
void reversex(char s[]);

/*reverse input lines, a line at a time */

int main()
{
    char line[MAXLINE];

    while ( getlinex(line, MAXLINE))
    {
        reversex(line);
        printf("%s", line);
    }
}

int getlinex( char s[], int lim)
{
    int c, i, j;
    while ( (c=getchar()) != EOF && c != '\n') 
    {
        if ( i < lim-2)
        {
            s[j] = c;
            j ++;  
        }
        if ( c== '\n')
        {
            s[j] = c;
            j++;
            i++;
        }
        s[j] = '\n';
        return i;
    }
}

void reversex( char s[])
{ 
    int i, j;
    char temp;

    i = 0;
    while ( s[i] != '\0') /*find the end of string*/
        i++;
    i--;                 /* back off from '\0'*/
    
    j = 0;
    while ( j < i) 
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        i--;
        j++;
    }
}





