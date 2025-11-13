#include <unistd.h>

void ft_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;

    a = '0';
    while (a <= '9')
    {
        b = a;
        while (b <= '9')
        {
            c = b;
            while (c <= '9')
            {
                d = c + 1;
                while (d <= '9')
                {
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, " ", 1);
                    write(1, &c, 1);
                    write(1, &d, 1);
                    write(1, ", ", 2);
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb2();
}