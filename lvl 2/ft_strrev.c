int len(char *s)
{
    int i;
    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    int end;
    int start;
    char tmp;

    start = 0;
    end = len(str) - 1;
    while (start < end)
    {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    return (str);
}