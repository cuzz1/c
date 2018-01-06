#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

/*逆波兰计算器*/

mian()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF)
        switch(type)
        {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop()*pop());
                break;
            case '-':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop()/op2);
                else 
                    printf("error: zero divisor\n");
                break;
            case '\n':
                printf("\t%.8\n", pop());
                break;
            default:
                printf("error: unknown command %s\n",s);
        }
    return 0;
}

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

/* push函数: 把f压入到值占中*/
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g", f)
}

/* pop函数:弹出并返回栈顶的值*/
double pop(void)
{
    if (sp > 0)
        return val [--sp]
}


#include <ctype.h>

int getch(void);
void ungetch(int);

/* getop函数: 获取下一个运算符或数值操作*/
int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t' )
        ;

    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;                /*不是数*/
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i]) = c = getch())
            ;
    if (c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c)
    return  NUMBER;
}
