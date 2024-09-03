#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...)
{
    int i = 0, count = 0;
    va_list args;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    {
                        char c = va_arg(args, int);
                        count += write(1, &c, 1);
                    }
                    break;
                case 's':
                    {
                        char *str = va_arg(args, char *);
                        if (!str)
                            str = "(null)";
                        count += write(1, str, strlen(str));
                    }
                    break;
                case 'd':
                case 'i':
                    count += print_number(va_arg(args, int));
                    break;
                case '%':
                    count += write(1, "%", 1);
                    break;
                default:
                    count += write(1, &format[i], 1);
                    break;
            }
        }
        else
        {
            count += write(1, &format[i], 1);
        }
        i++;
    }

    va_end(args);
    return (count);
}
