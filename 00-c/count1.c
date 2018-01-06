#include <stdio.h>

int main()
{
    int c, nb, nt, nl;
    nb = 0;
    nt = 0;
    nl = 0;

    while ( (c = getchar()) != EOF)
    {
        if ( c == ' ')
            ++ nb;
        else if ( c == '\n')
            ++ nt;
        else if ( c == '\t')
            ++ nl;
    }
    printf( "%d %d %d", nb, nt, nl);



}

