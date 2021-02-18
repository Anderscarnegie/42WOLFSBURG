char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}

char *ft_capitalize(char *str)
{
    int i;

    i = 0;
    ft_strlowcase(str);
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= 32;
    }
    while (str[i] != '\0')
    {
        if ((str[i] >= ' ' && str[i] <= '/') ||
            (str[i] >= ':' && str[i] <= '@'))
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] -= 32;
            }
        }
        i++;
    }
    return (str);
}