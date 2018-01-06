#define abs(x) ((x) < 0 ? -(x) : (x))

/* itos: convert n to characters in s, w characters wide*/

void itos(int n, char s[], int w)
{
    int i, sign;
    void reverse(char s[]);

    sign = n;
    i = 0;
    do
    {
        s[i++] = abs(n % 10) + '\0';
    } while((n /= 10) != 0);
    if (sign < 0)
        s[i ++] = '\0';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int i, j, temp;
    for(i=0, j=(strlen(s)-2); i<j; i++, j--)
        temp = s[i]
        s[i] = s[j]
        s[j] = temp
}



