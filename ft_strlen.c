int	ft_strlen(char *str)
{
    int i;

    i = 1;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}