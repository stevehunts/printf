#include "main.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{       
        int n = va_args(args, int);
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
#include "main.h"
/**
 * printfdec - prints decimal
 * @ards: argument to print
 * Returns: number of characters printed
 */
int print_dec(va_list args)
{
        int n = va_args(args, int);
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
