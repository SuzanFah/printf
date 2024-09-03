#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: Character string containing directives.
 *
 * Return: Number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;
    char buffer[1024];
    int buffer_index = 0;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            /* Handle specifiers */
            count += handle_specifier(format[i], args, buffer, &buffer_index);
        }
        else
        {
            buffer[buffer_index++] = format[i];
            if (buffer_index == 1024)
            {
                write(1, buffer, buffer_index);
                buffer_index = 0;
            }
            count++;
        }
        i++;
    }
    if (buffer_index > 0)
        write(1, buffer, buffer_index);

    va_end(args);
    return (count);
}

/* Add your helper function implementations here */

