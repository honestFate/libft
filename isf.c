#include <stddef.h>

int ft_isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}

int ft_isascii(int c)
{
    return (c >= 000 && c <= 0177);
}

int ft_isprint(int c)
{
    return (c >= 040 && c <= 0176);
}