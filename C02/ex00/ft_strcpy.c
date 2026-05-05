#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char *ft_strcpy(char *dst, char *src)
{
    char *temp;
    temp = dst;

    while(*src != '\0')
    {
        *dst = *src;
        src++;
        dst++;
    }
    return temp;
}