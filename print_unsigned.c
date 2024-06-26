#include "main.h"
/**
 * printf_unsigned - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
        unsigned int n = va_args(args, unsigned int);
        int num, last = n % 10, digit, exp = 1;
        int i = 1;

        n = n / 10;
        num = n;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                n = -n;
                last = -last;
                i++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        digit = num / exp;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
                        exp = exp / 10;
                        i++;
                }
        }
        _putchar(last = '0');

        return (i);
}
