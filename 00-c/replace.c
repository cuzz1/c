#include <stdio.h>

#define NONBANK 'a'

/* 
 * replace string of blanks with a single blank
*/
int main()
{
    int c, lastchar;
    lastchar = 'a';
    while ( (c=getchar()) != EOF)
    {
        if ( c != ' ')
            putchar(c);
        else if ( lastchar != ' ')
            putchar(c);
        lastchar = c;
    }
        return 0;
}

