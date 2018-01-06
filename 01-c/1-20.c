#include <stdio.h>

#define TABINC 8

/*replace tabs with the proper number of blanks*/

int main()
{
    int c, nb, pos;

    nb = 0;   /* number of blanks necessary*/
    pos = 1; /* postion of character in line*/
    while ( (c=getchar()) != EOF)
    {
        if (c == '\t')
        {
            nb = TABINC - (pos-1) % TABING;
            while (nb > 0)
            { 
                putchar(' ');
                pos ++;
                nb --;
            }
        }
        else if ( c== '\n')
        {
            putchar(c);
            pos = 1;
        }
        else
        {
            putchar(c);
            pos ++;
        }
    }
}
