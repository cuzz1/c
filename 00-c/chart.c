#include <stdio.h>

#define MAXHIS 15
#define MAXWORD 11
#define IN 1    
#define OUT 0

int main(void)
{
    int c, nc, i, state, overflow, maxvalue;
    int nword[11];
    int len;
    nc = 0;
    overflow = 0;
    state = OUT;
    
    for ( i=0; i<MAXWORD; i++)
    {
        nword[i] = 0;
    }

    while ( (c=getchar()) != EOF ) 
    {
        if ( c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            if ( nc >0 )
            {
                
                if ( nc < MAXWORD) 
                    nword[nc]++;
                else 
                    overflow++;
            }
            
        }
        else if ( state == OUT)
        {
            state = IN;
            nc = 1;
        }
        else
        {
            nc++;
        }
    }
    maxvalue = 0;
    for ( i = 0; i<MAXWORD; i++)
        if ( nword[i] > maxvalue )
        {
            maxvalue = nword[i];
        }
    for ( i=0; i<MAXWORD; i++) 
    {
        printf("%5d|%5d|", i, nword[i]); 
        if ( nword[i] > 0 ) 
        {
            len = nword[i]*MAXHIS/maxvalue;
        }
        else 
        {
            len = 0;
        }
        while ( len > 0 )
        {
            printf("*");
            len -= 1;
        }
        putchar('\n');
    }
    if ( overflow > 0)
        printf("There are %d words >= %d\n", overflow, MAXWORD);




    return 0;
}

