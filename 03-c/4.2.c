#include<stdio.h>
#include<ctype.h>

#define MAXLINE 100
int getlinex(char s[], int max);
double atof(char s[]);

/*简单计算器程序*/
int main()
{
    double sum, atof(char []);
    char line[MAXLINE];
    int getlinex(char line[], int max);
    double atof(char s[]);

    sum = 0;
    while (getlinex(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}


/* atof函数: 把字符串s转化为相应的双精度的浮点数*/

double atof(char s[])
{
    double val, power;
    int i, sign;

    for (i=0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val=0.0; isdigit(s[i]); i++)
        val = 10.0*val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0*val + (s[i]-'0');
        power *= 10.0;
    }
    printf("%g\n", sign*val/power);
    //return sign * val / power;
    val = sign * val / power

    if (s[i] == 'e' || s[i] == 'E')
    {
        sign = (s[++i] == '++ i') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-')
            i ++;
        for (exp = 0; isdigit(s[i]); i++)
            exp = 10 * exp + (s[i] - '0')
        if (sign == 1)
            while (exp-- > 0)
                val *= 10;
        else
            while (exp-- > 0)
                val /= 10;
    }
    return val;
    
}

int getlinex(char s[], int max)
{
    int i,c;
    while(--max > 0 &&(c=getchar()) != EOF && c != '\n' )
    {
        s[i++] = c;
    }
    s[i] = '\0';
}



