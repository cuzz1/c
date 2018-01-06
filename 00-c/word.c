#include <stdio.h>

#define IN 1
#define OUT 0

/*统计输入的行数，单词数与字符数*/
int main(void)
{
    int c, nl, nw, nc, state;

    state = OUT;   // 起始状态在单词外
    nl = nw = nc = 0;

    while( (c=getchar()) != EOF)
    {
        ++ nc;
        if (c == '\n')
        {
            ++ nl;
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if ( state == OUT )
        {
            state = IN;
            ++ nw;
        }
    }    
    printf( "nl=%d nw=%d nc=%d\n", nl, nw, nc );
    
    return 0;
}
